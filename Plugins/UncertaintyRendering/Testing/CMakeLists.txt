include(ParaViewTestingMacros)

set(UNCERTAINTY_RENDERING_TESTS
  ${CMAKE_CURRENT_SOURCE_DIR}/UncertaintyRendering.xml
)

set(UncertaintyRendering_USE_NEW_PANELS TRUE)

if(PARAVIEW_DATA_ROOT AND PARAVIEW_BUILD_QT_GUI AND BUILD_SHARED_LIBS)
  add_client_tests("pv"
    BASELINE_DIR ${PARAVIEW_DATA_ROOT}/Baseline
    TEST_SCRIPTS ${UNCERTAINTY_RENDERING_TESTS}
  )

  add_client_server_tests("pvcs"
    BASELINE_DIR ${PARAVIEW_DATA_ROOT}/Baseline
    TEST_SCRIPTS ${UNCERTAINTY_RENDERING_TESTS}
  )

  if(PARAVIEW_CLIENT_RENDER_SERVER_TESTS)
    add_client_render_server_tests("pvcrs"
      BASELINE_DIR ${PARAVIEW_DATA_ROOT}/Baseline
      TEST_SCRIPTS ${UNCERTAINTY_RENDERING_TESTS}
    )
  endif()
endif()
