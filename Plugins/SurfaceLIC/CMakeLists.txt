INCLUDE_DIRECTORIES(
  ${VTK_INCLUDE_DIRS}
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_BINARY_DIR}
  )
  
# Qt interface
SET( MOC_SRCS )
SET( UI_SRCS )

IF (PARAVIEW_BUILD_QT_GUI)

  QT4_WRAP_CPP( MOC_SRCS 
    pqSurfaceLICDisplayPanelDecorator.h
    pqSurfaceLICSummaryDisplayPanel.h
    )

  QT4_WRAP_UI( UI_SRCS 
    pqSurfaceLICDisplayPanelDecorator.ui
    pqSurfaceLICSummaryDisplayPanel.ui
    )
    
    
  SET( SURFACE_LIC_SOURCES
    pqSurfaceLICDisplayPanelDecorator.cxx
    pqSurfaceLICSummaryDisplayPanel.cxx
    )

  # server manager
  SET( SM_SOURCES
    vtkSurfaceLICRepresentation.cxx
    )

  SET( SM_XMLS
    vtkSurfaceLICRendering.xml
    vtkSurfaceLICExtension.xml
    )
    
  # This is the macro to add a display panel decorator.
  # It needs the class name, and the panel types we are decorating. It fills up 
  # IFACES and IFACE_SRCS with proper values as needed by ADD_PARAVIEW_PLUGIN macro.
  ADD_PARAVIEW_DISPLAY_PANEL_DECORATOR(
   IFACES IFACE_SRCS 
   CLASS_NAME pqSurfaceLICDisplayPanelDecorator
   PANEL_TYPES pqDisplayProxyEditor 
       # <-- This identifies the panel type(s) to decorate
       # Our decorator will only be instantiated for the panel types indicated here
  )

  # add summary display panel
  ADD_PARAVIEW_SUMMARY_DISPLAY_PANEL(
    SUMMARY_IFACES 
    SUMMARY_IFACE_SRCS 
    "representations, GeometryRepresentation, Surface LIC;representations, UniformGridRepresentation, Surface LIC;representations, UnstructuredGridRepresentation, Surface LIC"
    pqSurfaceLICSummaryDisplayPanel
  )


  ADD_PARAVIEW_PLUGIN( SurfaceLIC "1.0"

    DOCUMENTATION_DIR
      "${CMAKE_CURRENT_SOURCE_DIR}/doc"

    SERVER_MANAGER_XML 
      ${SM_XMLS}
      
    SERVER_MANAGER_SOURCES 
      ${SM_SOURCES}
      
    GUI_INTERFACES 
      ${IFACES} 
      ${SUMMARY_IFACES}

    GUI_SOURCES 
      ${MOC_SRCS}
      ${SURFACE_LIC_SOURCES}
      ${UI_SRCS}
      ${IFACE_SRCS}
      ${SUMMARY_IFACE_SRCS}
    )

  # add dependency with required vtk modules.
  target_link_libraries(SurfaceLIC vtkRenderingHybridOpenGL)
ENDIF (PARAVIEW_BUILD_QT_GUI)
