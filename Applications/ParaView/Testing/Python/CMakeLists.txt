SET (TESTS_WITHOUT_BASELINES
  ${CMAKE_CURRENT_SOURCE_DIR}/TestContourWidget.py
  )

SET (TESTS_WITH_BASELINES
  ${CMAKE_CURRENT_SOURCE_DIR}/DisconnectAndSaveAnimation.py
#  ${CMAKE_CURRENT_SOURCE_DIR}/CTHAMRBaseLine.py
#  ${CMAKE_CURRENT_SOURCE_DIR}/CTHAMRContour.py
#  ${CMAKE_CURRENT_SOURCE_DIR}/CTHAMRDualClip.py
#  ${CMAKE_CURRENT_SOURCE_DIR}/CTHAMRClip.py
#  ${CMAKE_CURRENT_SOURCE_DIR}/CTHAMRMaterialInterfaceFilter.py
  ${CMAKE_CURRENT_SOURCE_DIR}/FileSeries.py
  ${CMAKE_CURRENT_SOURCE_DIR}/NonlinearSubdivisionDisplay.py
  )

IF(PARAVIEW_BUILD_PLUGIN_Manta)
  SET(TESTS_WITH_BASELINES ${TESTS_WITH_BASELINES}
    ${CMAKE_CURRENT_SOURCE_DIR}/MantaTest.py
    ${CMAKE_CURRENT_SOURCE_DIR}/MantaServerSideTest.py
    )
ENDIF(PARAVIEW_BUILD_PLUGIN_Manta)

# Disable client test, only for remote connections.
SET (DisconnectAndSaveAnimation_DISABLE_C TRUE)
SET (DisconnectAndSaveAnimation_DISABLE_CRS TRUE)
set (FileSeries_BREAK TRUE)
set (DisconnectAndSaveAnimation_BREAK TRUE)
set (NonlinearSubdivisionDisplay_DISABLE_CRS TRUE)

set (MantaServerSideTest_DISABLE_C TRUE)
set (MantaServerSideTest_DISABLE_CRS TRUE)
SET (MantaTest_BREAK TRUE)

add_client_tests("pypv"
  TEST_SCRIPTS ${TESTS_WITHOUT_BASELINES}
  )

IF (PARAVIEW_DATA_ROOT)
  add_client_tests("pypv"
    TEST_SCRIPTS ${TESTS_WITH_BASELINES}
  )

  add_client_server_tests("pypvcs"
    TEST_SCRIPTS ${TESTS_WITH_BASELINES}
  )

  IF (PARAVIEW_CLIENT_RENDER_SERVER_TESTS)
    add_client_render_server_tests("pypvcrs"
      TEST_SCRIPTS ${TESTS_WITH_BASELINES}
    )
  ENDIF (PARAVIEW_CLIENT_RENDER_SERVER_TESTS)

# TODO: remote rendering tests and reverse connect tests.

# only enable TestPythonAnnotationFilter test if numpy is available
include(TestNumPy)
if (FOUND_NUMPY)
  # Add pvpython tests
  add_test(NAME pvpython.TestPythonAnnotationFilter
      COMMAND pvpython
      --data=${PARAVIEW_DATA_ROOT}/Data/can.ex2
      ${CMAKE_CURRENT_SOURCE_DIR}/TestPythonAnnotationFilter.py)
  add_test(NAME pvpython.TestPythonAnnotationFilterNoMerge
      COMMAND pvpython
      --data=${PARAVIEW_DATA_ROOT}/Data/can.ex2
      ${CMAKE_CURRENT_SOURCE_DIR}/TestPythonAnnotationFilterNoMerge.py)
  set_tests_properties(
    pvpython.TestPythonAnnotationFilter
    pvpython.TestPythonAnnotationFilterNoMerge
    PROPERTIES LABELS "PARAVIEW")
endif()

ENDIF (PARAVIEW_DATA_ROOT)

# Python Multi-servers test
# => Only for shared build as we dynamically load plugins
if(BUILD_SHARED_LIBS)
  add_test(NAME py-multi-servers.TestMultiServersConfig
    COMMAND smTestDriver
    --test-multi-servers 2
    --server $<TARGET_FILE:pvserver>
    --client $<TARGET_FILE:pvpython>
    ${CMAKE_CURRENT_SOURCE_DIR}/TestMultiServersConfig.py
  )

  add_test(NAME py-multi-servers.TestMultiServersRemoteProxy
    COMMAND smTestDriver
    --test-multi-servers 3
    --server $<TARGET_FILE:pvserver>
    --client $<TARGET_FILE:pvpython>
    ${CMAKE_CURRENT_SOURCE_DIR}/TestMultiServersRemoteProxy.py
  )

  set_tests_properties(
    py-multi-servers.TestMultiServersConfig
    py-multi-servers.TestMultiServersRemoteProxy
    PROPERTIES LABELS "PARAVIEW")
endif(BUILD_SHARED_LIBS)
