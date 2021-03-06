#==========================================================================
#
#     Program: ParaView
#
#     Copyright (c) 2005-2008 Sandia Corporation, Kitware Inc.
#     All rights reserved.
#
#     ParaView is a free software; you can redistribute it and/or modify it
#     under the terms of the ParaView license version 1.2.
#
#     See License_v1.2.txt for the full ParaView license.
#     A copy of this license can be obtained by contacting
#     Kitware Inc.
#     28 Corporate Drive
#     Clifton Park, NY 12065
#     USA
#
#  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
#  ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
#  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
#  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHORS OR
#  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
#  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
#  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
#  PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
#  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
#  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
#  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
#==========================================================================
set(Module_SRCS
  vtkAttributeDataToTableFilter.cxx
  vtkBlockDeliveryPreprocessor.cxx
  vtkCameraInterpolator2.cxx
  vtkCameraManipulator.cxx
  vtkCameraManipulatorGUIHelper.cxx
  vtkChartNamedOptions.cxx
  vtkCleanArrays.cxx
  vtkCompositeDataToUnstructuredGridFilter.cxx
  vtkCSVExporter.cxx
  vtkImageCompressor.cxx
  vtkKdTreeGenerator.cxx
  vtkKdTreeManager.cxx
  vtkMarkSelectedRows.cxx
  vtkMultiSliceContextItem.cxx
  vtkOrderedCompositeDistributor.cxx
  vtkPVArrowSource.cxx
  vtkPVAxesActor.cxx
  vtkPVAxesWidget.cxx
  vtkPVCenterAxesActor.cxx
  vtkPVDefaultPass.cxx
  vtkPVGenericRenderWindowInteractor.cxx
  vtkPVGeometryFilter.cxx
  vtkPVGL2PSExporter.cxx
  vtkPVHardwareSelector.cxx
  vtkPVInteractorStyle.cxx
  vtkPVJoystickFly.cxx
  vtkPVJoystickFlyIn.cxx
  vtkPVJoystickFlyOut.cxx
  vtkPVLODActor.cxx
  vtkPVLODVolume.cxx
  vtkPVMergeTables.cxx
  vtkPVMergeTablesMultiBlock.cxx
  vtkPVPlotTime.cxx
  vtkPVRecoverGeometryWireframe.cxx
  vtkPVRenderViewProxy.cxx
  vtkPVScalarBarActor.cxx
  vtkPVTrackballMoveActor.cxx
  vtkPVTrackballMultiRotate.cxx
  vtkPVTrackballPan.cxx
  vtkPVTrackballRoll.cxx
  vtkPVTrackballRotate.cxx
  vtkPVTrackballZoom.cxx
  vtkPVUpdateSuppressor.cxx
  vtkReductionFilter.cxx
  vtkResampledAMRImageSource.cxx
  vtkSelectionConverter.cxx
  vtkSelectionSerializer.cxx
  vtkSortedTableStreamer.cxx
  vtkSquirtCompressor.cxx
  vtkTexturePainter.cxx
  vtkTileDisplayHelper.cxx
  vtkTilesHelper.cxx
  vtkTrackballPan.cxx
  vtkUpdateSuppressorPipeline.cxx
  vtkViewLayout.cxx
  vtkVolumeRepresentationPreprocessor.cxx
  vtkXYChartNamedOptions.cxx
  vtkZlibImageCompressor.cxx
)

if (PARAVIEW_USE_MPI)
  list(APPEND Module_SRCS
    vtkAllToNRedistributeCompositePolyData.cxx
    vtkAllToNRedistributePolyData.cxx
    vtkBalancedRedistributePolyData.cxx
    vtkRedistributePolyData.cxx
    vtkWeightedRedistributePolyData.cxx
    vtkMPICompositeManager.cxx # deprecate?
    )

  if (PARAVIEW_USE_ICE_T)
    list(APPEND Module_SRCS
      vtkIceTCompositePass.cxx
      vtkIceTContext.cxx)
  endif()
endif()

#set_source_files_properties(
#  WRAP_EXCLUDE
#  )

set_source_files_properties(
  vtkCameraManipulatorGUIHelper
  vtkImageCompressor
  vtkPVJoystickFly
  vtkPVRenderViewProxy
  ABSTRACT)

#---------------------------------------------------------
# Encode glsl files.
foreach (file vtkIceTCompositeZPassShader_fs.glsl)
  get_filename_component(file_we ${file} NAME_WE)
  set(src  ${CMAKE_CURRENT_SOURCE_DIR}/${file})
  set(res  ${CMAKE_CURRENT_BINARY_DIR}/${file_we}.cxx)
  set(resh ${CMAKE_CURRENT_BINARY_DIR}/${file_we}.h)
  list(APPEND shader_h_files ${resh})
  add_custom_command(
    OUTPUT ${res} ${resh}
    DEPENDS ${src} vtkEncodeString
    COMMAND vtkEncodeString
    ARGS ${res} ${src} ${file_we} --build-header
      VTKPVVTKEXTENSIONSRENDERING_EXPORT vtkPVVTKExtensionsRenderingModule.h
    )
  list(APPEND Module_SRCS ${res})
  set_source_files_properties(${file_we} WRAP_EXCLUDE)
endforeach()
#---------------------------------------------------------

vtk_module_library(vtkPVVTKExtensionsRendering ${Module_SRCS})
