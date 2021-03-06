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
set (Module_SRCS
  pq3DWidget.cxx
  pq3DWidget.h
  pq3DWidgetInterface.cxx
  pq3DWidgetInterface.h
  pq3DWidgetPropertyWidget.cxx
  pq3DWidgetPropertyWidget.h
  pqAboutDialog.cxx
  pqAboutDialog.h
  pqActionGroupInterface.cxx
  pqActionGroupInterface.h
  pqActiveObjects.cxx
  pqActiveObjects.h
  pqActivePlotMatrixViewOptions.cxx
  pqActivePlotMatrixViewOptions.h
  pqActiveRenderViewOptions.cxx
  pqActiveRenderViewOptions.h
  pqActiveServer.cxx
  pqActiveServer.h
  pqActiveView.cxx
  pqActiveView.h
  pqActiveViewOptions.cxx
  pqActiveViewOptions.h
  pqActiveViewOptionsManager.cxx
  pqActiveViewOptionsManager.h
  pqActiveXYChartOptions.cxx
  pqActiveXYChartOptions.h
  #pqAddSourceDialog.cxx
  #pqAddSourceDialog.h
  pqAnimatablePropertiesComboBox.cxx
  pqAnimatablePropertiesComboBox.h
  pqAnimatableProxyComboBox.cxx
  pqAnimatableProxyComboBox.h
  pqAnimationManager.cxx
  pqAnimationManager.h
  pqAnimationViewWidget.cxx
  pqAnimationViewWidget.h
  pqApplicationOptions.cxx
  pqApplicationOptionsDialog.cxx
  pqApplicationOptionsDialog.h
  pqApplicationOptions.h
  pqApplyPropertiesManager.cxx
  pqApplyPropertiesManager.h
  pqArrayListDomain.cxx
  pqArrayListDomain.h
  pqArrayStatusPropertyWidget.cxx
  pqArrayStatusPropertyWidget.h
  pqAutoGeneratedObjectPanel.cxx
  pqAutoGeneratedObjectPanel.h
  pqBuiltinColorMaps.h
  pqBoxWidget.cxx
  pqBoxWidget.h
  pqCalculatorPanel.cxx
  pqCalculatorPanel.h
  pqCalculatorWidget.cxx
  pqCalculatorWidget.h
  pqCameraDialog.cxx
  pqCameraDialog.h
  pqCameraKeyFrameWidget.cxx
  pqCameraKeyFrameWidget.h
  pqChangeInputDialog.cxx
  pqChangeInputDialog.h
  pqChartPixelScale.cxx
  pqChartPixelScale.h
  pqChartSummaryDisplayPanel.cxx
  pqChartSummaryDisplayPanel.h
  pqChartValue.cxx
  pqChartValue.h
  pqClipPanel.cxx
  pqClipPanel.h
  pqCollaborationPanel.cxx
  pqCollaborationPanel.h
  pqColorMapModel.cxx
  pqColorMapModel.h
  pqColorPresetManager.cxx
  pqColorPresetManager.h
  pqColorPresetModel.cxx
  pqColorPresetModel.h
  pqColorScaleEditor.cxx
  pqColorScaleEditor.h
  pqColorScaleToolbar.cxx
  pqColorScaleToolbar.h
  pqComboBoxDomain.cxx
  pqComboBoxDomain.h
  pqComparativeCueWidget.cxx
  pqComparativeCueWidget.h
  pqComparativeVisPanel.cxx
  pqComparativeVisPanel.h
  pqComponentsInit.cxx
  pqComponentsInit.h
  pqComponentsTestUtility.cxx
  pqComponentsTestUtility.h
  pqContourPanel.cxx
  pqContourPanel.h
  pqContourWidget.cxx
  pqContourWidget.h
  pqCubeAxesEditorDialog.cxx
  pqCubeAxesEditorDialog.h
  pqCurrentTimeToolbar.cxx
  pqCurrentTimeToolbar.h
  pqCustomFilterDefinitionModel.cxx
  pqCustomFilterDefinitionModel.h
  pqCustomFilterDefinitionWizard.cxx
  pqCustomFilterDefinitionWizard.h
  pqCustomFilterManager.cxx
  pqCustomFilterManager.h
  pqCustomFilterManagerModel.cxx
  pqCustomFilterManagerModel.h
  pqCustomViewButtonDialog.cxx
  pqCustomViewButtonDialog.h
  pqCutPanel.cxx
  pqCutPanel.h
  pqDataInformationModel.cxx
  pqDataInformationModel.h
  pqDataInformationWidget.cxx
  pqDataInformationWidget.h
  pqDialog.cxx
  pqDialog.h
  pqDisplayArrayWidget.cxx
  pqDisplayArrayWidget.h
  pqDisplayColorWidget.cxx
  pqDisplayColorWidget.h
  pqDisplayPanel.cxx
  pqDisplayPanel.h
  pqDisplayPanelDecoratorInterface.cxx
  pqDisplayPanelDecoratorInterface.h
  pqDisplayPanelInterface.cxx
  pqDisplayPanelInterface.h
  pqDisplayPanelPropertyWidget.cxx
  pqDisplayPanelPropertyWidget.h
  pqDisplayProxyEditor.cxx
  pqDisplayProxyEditor.h
  pqDisplayProxyEditorWidget.cxx
  pqDisplayProxyEditorWidget.h
  pqDisplayRepresentationWidget.cxx
  pqDisplayRepresentationWidget.h
  pqDistanceWidget.cxx
  pqDistanceWidget.h
  pqDockWindowInterface.cxx
  pqDockWindowInterface.h
  pqDoubleEdit.cxx
  pqDoubleEdit.h
  pqDoubleVectorPropertyWidget.cxx
  pqDoubleVectorPropertyWidget.h
  pqExodusIIPanel.cxx
  pqExodusIIPanel.h
  pqExodusIIVariableSelectionWidget.cxx
  pqExodusIIVariableSelectionWidget.h
  pqExtractCTHPartsPanel.cxx
  pqExtractCTHPartsPanel.h
  pqFieldSelectionAdaptor.cxx
  pqFieldSelectionAdaptor.h
  pqFileChooserWidget.cxx
  pqFileChooserWidget.h
  pqFixStateFilenamesDialog.cxx
  pqFixStateFilenamesDialog.h
  pqGlobalRenderViewOptions.cxx
  pqGlobalRenderViewOptions.h
  pqGlyphPanel.cxx
  pqGlyphPanel.h
  pqHandleWidget.cxx
  pqHandleWidget.h
  pqImageTip.cxx
  pqImageTip.h
  pqImplicitPlaneWidget.cxx
  pqImplicitPlaneWidget.h
  pqIntRangeWidget.cxx
  pqIntRangeWidget.h
  pqIntVectorPropertyWidget.cxx
  pqIntVectorPropertyWidget.h
  pqIsoVolumePanel.cxx
  pqIsoVolumePanel.h
  pqItemViewSearchWidget.cxx
  pqItemViewSearchWidget.h
  pqKeyFrameEditor.cxx
  pqKeyFrameEditor.h
  pqKeyFrameTimeValidator.cxx
  pqKeyFrameTimeValidator.h
  pqKeyFrameTypeWidget.cxx
  pqKeyFrameTypeWidget.h
  pqLineSourceWidget.cxx
  pqLineSourceWidget.h
  pqLineWidget.cxx
  pqLineWidget.h
  pqLinksEditor.cxx
  pqLinksEditor.h
  pqLinksManager.cxx
  pqLinksManager.h
  pqLiveInsituVisualizationManager.cxx
  pqLiveInsituVisualizationManager.h
  pqLoadedFormObjectPanel.cxx
  pqLoadedFormObjectPanel.h
  pqLockViewSizeCustomDialog.cxx
  pqLockViewSizeCustomDialog.h
  pqMemoryInspectorPanel.cxx
  pqMemoryInspectorPanel.h
  pqMultiViewWidget.cxx
  pqMultiViewWidget.h
  pqNamedObjectPanel.cxx
  pqNamedObjectPanel.h
  pqNamedWidgets.cxx
  pqNamedWidgets.h
  pqNetCDFPanel.cxx
  pqNetCDFPanel.h
  pqObjectInspectorWidget.cxx
  pqObjectInspectorWidget.h
  pqObjectPanel.cxx
  pqObjectPanel.h
  pqObjectPanelInterface.cxx
  pqObjectPanelInterface.h
  pqObjectPanelPropertyWidget.cxx
  pqObjectPanelPropertyWidget.h
  pqOptionsContainer.cxx
  pqOptionsContainer.h
  pqOptionsDialog.cxx
  pqOptionsDialog.h
  pqOptionsPage.cxx
  pqOptionsPage.h
  pqOrbitCreatorDialog.cxx
  pqOrbitCreatorDialog.h
  pqOrbitWidget.cxx
  pqOrbitWidget.h
  pqOutputPortComboBox.cxx
  pqOutputPortComboBox.h
  pqParallelCoordinatesChartDisplayPanel.cxx
  pqParallelCoordinatesChartDisplayPanel.h
#  pqParticleTracerPanel.cxx
#  pqParticleTracerPanel.h
  pqPassArraysPanel.cxx
  pqPassArraysPanel.h
  pqPipelineAnnotationFilterModel.cxx
  pqPipelineAnnotationFilterModel.h
  pqPipelineBrowserWidget.cxx
  pqPipelineBrowserWidget.h
  pqPipelineModel.cxx
  pqPipelineModel.h
  pqPipelineModelSelectionAdaptor.cxx
  pqPipelineModelSelectionAdaptor.h
  pqPipelineTimeKeyFrameEditor.cxx
  pqPipelineTimeKeyFrameEditor.h
  pqPlotMatrixDisplayPanel.cxx
  pqPlotMatrixDisplayPanel.h
  pqPlotMatrixOptionsEditor.cxx
  pqPlotMatrixOptionsEditor.h
  pqPluginDialog.cxx
  pqPluginDialog.h
  pqPluginTreeWidgetEventPlayer.cxx
  pqPluginTreeWidgetEventPlayer.h
  pqPluginTreeWidgetEventTranslator.cxx
  pqPluginTreeWidgetEventTranslator.h
  pqPluginTreeWidget.h
  pqPointSourceWidget.cxx
  pqPointSourceWidget.h
  pqPQLookupTableManager.cxx
  pqPQLookupTableManager.h
  pqPropertiesPanel.cxx
  pqPropertiesPanel.h
  pqPropertyWidget.cxx
  pqPropertyWidget.h
  pqPropertyWidgetInterface.cxx
  pqPropertyWidgetInterface.h
  pqProxyInformationWidget.cxx
  pqProxyInformationWidget.h
  pqProxyPanel.cxx
  pqProxyPanel.h
  pqProxyPropertiesPanel.cxx
  pqProxyPropertiesPanel.h
  pqProxyPropertyWidget.cxx
  pqProxyPropertyWidget.h
  pqProxySelectionWidget.cxx
  pqProxySelectionWidget.h
  pqProxySILModel.cxx
  pqProxySILModel.h
  pqQueryClauseWidget.cxx
  pqQueryClauseWidget.h
  pqQueryDialog.cxx
  pqQueryDialog.h
  pqRecentFilesMenu.cxx
  pqRecentFilesMenu.h
  pqRenderViewOptions.cxx
  pqRenderViewOptions.h
  pqRemoteCommandDialog.cxx
  pqRemoteCommandDialog.h
  pqRemoteCommandTemplateDialog.cxx
  pqRemoteCommandTemplateDialog.h
  pqRescaleRange.cxx
  pqRescaleRange.h
  pqSampleScalarAddRangeDialog.cxx
  pqSampleScalarAddRangeDialog.h
  pqSampleScalarWidget.cxx
  pqSampleScalarWidget.h
  pqSaveSnapshotDialog.cxx
  pqSaveSnapshotDialog.h
  pqScalarSetModel.cxx
  pqScalarSetModel.h
  pqScalarValueListPropertyWidget.cxx
  pqScalarValueListPropertyWidget.h
  pqSelectionAdaptor.cxx
  pqSelectionAdaptor.h
  pqSelectionInputWidget.cxx
  pqSelectionInputWidget.h
  pqSelectionInspectorPanel.cxx
  pqSelectionInspectorPanel.h
  pqSelectionManager.cxx
  pqSelectionManager.h
  pqSelectReaderDialog.cxx
  pqSelectReaderDialog.h
  pqSelectThroughPanel.cxx
  pqSelectThroughPanel.h
  pqServerConfigurationImporter.cxx
  pqServerConfigurationImporter.h
  pqServerConnectDialog.cxx
  pqServerConnectDialog.h
  pqServerLauncher.cxx
  pqServerLauncher.h
  pqSignalAdaptorCompositeTreeWidget.cxx
  pqSignalAdaptorCompositeTreeWidget.h
  pqSignalAdaptorKeyFrameType.cxx
  pqSignalAdaptorKeyFrameType.h
  pqSignalAdaptorSelectionTreeWidget.cxx
  pqSignalAdaptorSelectionTreeWidget.h
  pqSignalAdaptorTreeWidget.cxx
  pqSignalAdaptorTreeWidget.h
  pqSILModel.cxx
  pqSILModel.h
  pqSILWidget.cxx
  pqSILWidget.h
  pqSMSignalAdaptors.cxx
  pqSMSignalAdaptors.h
  pqSphereWidget.cxx
  pqSphereWidget.h
  pqSplineWidget.cxx
  pqSplineWidget.h
  pqSpreadSheetDisplayEditor.cxx
  pqSpreadSheetDisplayEditor.h
  pqSpreadSheetViewDecorator.cxx
  pqSpreadSheetViewDecorator.h
  pqStandardColorButton.cxx
  pqStandardColorButton.h
  pqStandardColorLinkAdaptor.cxx
  pqStandardColorLinkAdaptor.h
  pqStreamTracerPanel.cxx
  pqStreamTracerPanel.h
  pqStringVectorPropertyWidget.cxx
  pqStringVectorPropertyWidget.h
  pqSummaryPanel.cxx
  pqSummaryPanel.h
  pqSummaryPanelInterface.cxx
  pqSummaryPanelInterface.h
  pqTabbedMultiViewWidget.cxx
  pqTabbedMultiViewWidget.h
  pqTextDisplayPropertiesWidget.cxx
  pqTextDisplayPropertiesWidget.h
  pqTextureComboBox.cxx
  pqTextureComboBox.h
  pqTextureSelectorPropertyWidget.cxx
  pqTextureSelectorPropertyWidget.h
  pqThresholdPanel.cxx
  pqThresholdPanel.h
  pqTimerLogDisplay.cxx
  pqTimerLogDisplay.h
  pqToolTipTrapper.cxx
  pqToolTipTrapper.h
  pqTransferFunctionChartViewWidget.cxx
  pqTransferFunctionChartViewWidget.h 
  pqTriggerOnIdleHelper.cxx
  pqTriggerOnIdleHelper.h
  pqUndoStackBuilder.cxx
  pqUndoStackBuilder.h
  pqVariableType.h
  pqVCRController.cxx
  pqVCRController.h
  pqViewContextMenuHandler.cxx
  pqViewContextMenuHandler.h
  pqViewContextMenuManager.cxx
  pqViewContextMenuManager.h
  pqViewFrameActionGroupInterface.cxx
  pqViewFrameActionGroupInterface.h
  pqViewFrame.cxx
  pqViewFrame.h
  pqViewManager.cxx
  pqViewManager.h
  pqViewOptionsInterface.cxx
  pqViewOptionsInterface.h
  pqWidgetRangeDomain.cxx
  pqWidgetRangeDomain.h
  pqWriterDialog.cxx
  pqWriterDialog.h
  pqXYChartDisplayPanel.cxx
  pqXYChartDisplayPanel.h
  pqXYChartOptionsEditor.cxx
  pqXYChartOptionsEditor.h
  pqYoungsMaterialInterfacePanel.cxx
  pqYoungsMaterialInterfacePanel.h
)

set (Module_MOC_HDRS
  pq3DWidget.h
  pq3DWidgetPropertyWidget.h
  pqAboutDialog.h
  pqActiveObjects.h
  pqActivePlotMatrixViewOptions.h
  pqActiveRenderViewOptions.h
  pqActiveServer.h
  pqActiveView.h
  pqActiveViewOptions.h
  pqActiveViewOptionsManager.h
  pqActiveXYChartOptions.h
  #pqAddSourceDialog.h
  pqAnimatablePropertiesComboBox.h
  pqAnimatableProxyComboBox.h
  pqAnimationManager.h
  pqAnimationViewWidget.h
  pqApplicationOptionsDialog.h
  pqApplicationOptions.h
  pqApplyPropertiesManager.h
  pqArrayListDomain.h
  pqArrayStatusPropertyWidget.h
  pqAutoGeneratedObjectPanel.h
  pqBoxWidget.h
  pqCalculatorPanel.h
  pqCalculatorWidget.h
  pqCameraDialog.h
  pqCameraKeyFrameWidget.h
  pqChangeInputDialog.h
  pqChartSummaryDisplayPanel.h
  pqClipPanel.h
  pqCollaborationPanel.h
  pqColorMapModel.h
  pqColorPresetManager.h
  pqColorPresetModel.h
  pqColorScaleEditor.h
  pqColorScaleToolbar.h
  pqComboBoxDomain.h
  pqComparativeCueWidget.h
  pqComparativeVisPanel.h
  pqComponentsTestUtility.h
  pqContourPanel.h
  pqContourWidget.h
  pqCubeAxesEditorDialog.h
  pqCurrentTimeToolbar.h
  pqCustomFilterDefinitionWizard.h
  pqCustomFilterManager.h
  pqCustomFilterManagerModel.h
  pqCustomViewButtonDialog.h
  pqCutPanel.h
  pqDataInformationModel.h
  pqDataInformationWidget.h
  pqDialog.h
  pqDisplayArrayWidget.h
  pqDisplayColorWidget.h
  pqDisplayPanel.h
  pqDisplayPanelPropertyWidget.h
  pqDisplayProxyEditor.h
  pqDisplayProxyEditorWidget.h
  pqDisplayRepresentationWidget.h
  pqDistanceWidget.h
  pqDoubleEdit.h
  pqDoubleVectorPropertyWidget.h
  pqExodusIIPanel.h
  pqExodusIIVariableSelectionWidget.h
  pqExtractCTHPartsPanel.h
  pqFieldSelectionAdaptor.h
  pqFileChooserWidget.h
  pqFixStateFilenamesDialog.h
  pqGlobalRenderViewOptions.h
  pqGlyphPanel.h
  pqHandleWidget.h
  pqImageTip.h
  pqImplicitPlaneWidget.h
  pqIntRangeWidget.h
  pqIntVectorPropertyWidget.h
  pqIsoVolumePanel.h
  pqItemViewSearchWidget.h
  pqKeyFrameEditor.h
  pqKeyFrameTimeValidator.h
  pqKeyFrameTypeWidget.h
  pqLineSourceWidget.h
  pqLineWidget.h
  pqLinksEditor.h
  pqLinksManager.h
  pqLiveInsituVisualizationManager.h
  pqLoadedFormObjectPanel.h
  pqLockViewSizeCustomDialog.h
  pqMemoryInspectorPanel.h
  pqMultiViewWidget.h
  pqNamedObjectPanel.h
  pqNetCDFPanel.h
  pqObjectInspectorWidget.h
  pqObjectPanel.h
  pqObjectPanelPropertyWidget.h
  pqOptionsContainer.h
  pqOptionsDialog.h
  pqOptionsPage.h
  pqOrbitCreatorDialog.h
  pqOrbitWidget.h
  pqOutputPortComboBox.h
  pqParallelCoordinatesChartDisplayPanel.h
#  pqParticleTracerPanel.h
  pqPassArraysPanel.h
  pqPipelineAnnotationFilterModel.h
  pqPipelineBrowserWidget.h
  pqPipelineModel.h
  pqPipelineModelSelectionAdaptor.h
  pqPipelineTimeKeyFrameEditor.h
  pqPlotMatrixDisplayPanel.h
  pqPlotMatrixOptionsEditor.h
  pqPluginDialog.h
  pqPluginTreeWidgetEventPlayer.h
  pqPluginTreeWidgetEventTranslator.h
  pqPluginTreeWidget.h
  pqPointSourceWidget.h
  pqPQLookupTableManager.h
  pqPropertiesPanel.h
  pqPropertyWidget.h
  pqProxyInformationWidget.h
  pqProxyPanel.h
  pqProxyPropertiesPanel.h
  pqProxyPropertyWidget.h
  pqProxySelectionWidget.h
  pqProxySILModel.h
  pqQueryClauseWidget.h
  pqQueryDialog.h
  pqRecentFilesMenu.h
  pqRemoteCommandDialog.h
  pqRemoteCommandTemplateDialog.h
  pqRenderViewOptions.h
  pqRescaleRange.h
  pqSampleScalarAddRangeDialog.h
  pqSampleScalarWidget.h
  pqSaveSnapshotDialog.h
  pqScalarSetModel.h
  pqScalarValueListPropertyWidget.h
  pqSelectionAdaptor.h
  pqSelectionInputWidget.h
  pqSelectionInspectorPanel.h
  pqSelectionManager.h
  pqSelectReaderDialog.h
  pqSelectThroughPanel.h
  pqServerConfigurationImporter.h
  pqServerConnectDialog.h
  pqServerLauncher.h
  pqSignalAdaptorCompositeTreeWidget.h
  pqSignalAdaptorKeyFrameType.h
  pqSignalAdaptorSelectionTreeWidget.h
  pqSignalAdaptorTreeWidget.h
  pqSILModel.h
  pqSILWidget.h
  pqSMSignalAdaptors.h
  pqSphereWidget.h
  pqSplineWidget.h
  pqSpreadSheetDisplayEditor.h
  pqSpreadSheetViewDecorator.h
  pqStandardColorButton.h
  pqStandardColorLinkAdaptor.h
  pqStreamTracerPanel.h
  pqStringVectorPropertyWidget.h
  pqSummaryPanel.h
  pqTabbedMultiViewWidget.h
  pqTextDisplayPropertiesWidget.h
  pqTextureComboBox.h
  pqTextureSelectorPropertyWidget.h
  pqThresholdPanel.h
  pqTimerLogDisplay.h
  pqToolTipTrapper.h
  pqTransferFunctionChartViewWidget.h
  pqTriggerOnIdleHelper.h
  pqVCRController.h
  pqViewContextMenuHandler.h
  pqViewContextMenuManager.h
  pqViewFrameActionGroup.h
  pqViewFrame.h
  pqViewManager.h
  pqWidgetRangeDomain.h
  pqWriterDialog.h
  pqXYChartDisplayPanel.h
  pqXYChartOptionsEditor.h
  pqYoungsMaterialInterfacePanel.h
)

set (Module_UI_FILES
  Resources/UI/pqAbortAnimation.ui
  Resources/UI/pqAboutDialog.ui
  #Resources/UI/pqAddSourceDialog.ui
  Resources/UI/pqAnimationSettings.ui
  Resources/UI/pqApplicationOptions.ui
  Resources/UI/pqBarChartOptionsWidget.ui
  Resources/UI/pqBoxWidget.ui
  Resources/UI/pqCalculatorPanel.ui
  Resources/UI/pqCalculatorWidget.ui
  Resources/UI/pqCameraDialog.ui
  Resources/UI/pqCameraKeyFrameWidget.ui
  Resources/UI/pqChangeInputDialog.ui
  Resources/UI/pqChartOptionsWidget.ui
  Resources/UI/pqCollaborationPanel.ui
  Resources/UI/pqColorPresetDialog.ui
  Resources/UI/pqColorScaleDialog.ui
  Resources/UI/pqComparativeParameterRangeDialog.ui
  Resources/UI/pqComparativeVisPanel.ui
  Resources/UI/pqContourControls.ui
  Resources/UI/pqContourWidget.ui
  Resources/UI/pqCubeAxesEditorDialog.ui
  Resources/UI/pqCustomFilterDefinitionWizard.ui
  Resources/UI/pqCustomFilterManager.ui
  Resources/UI/pqCustomViewButtonDialog.ui
  Resources/UI/pqDisplayProxyEditor.ui
  Resources/UI/pqDisplayProxyEditorWidget.ui
  Resources/UI/pqDisplayRepresentationWidget.ui
  Resources/UI/pqEmptyView.ui
  Resources/UI/pqExodusIIPanel.ui
  Resources/UI/pqFixStateFilenamesDialog.ui
  Resources/UI/pqGlobalRenderViewOptions.ui
  Resources/UI/pqHandleWidget.ui
  Resources/UI/pqImplicitPlaneWidget.ui
  Resources/UI/pqIsoVolumePanel.ui
  Resources/UI/pqItemViewSearchWidget.ui
  Resources/UI/pqKeyFrameEditor.ui
  Resources/UI/pqKeyFrameTypeWidget.ui
  Resources/UI/pqLineSourceControls.ui
  Resources/UI/pqLineWidget.ui
  Resources/UI/pqLinksEditor.ui
  Resources/UI/pqLinksManager.ui
  Resources/UI/pqLockViewSizeCustomDialog.ui
  Resources/UI/pqMemoryInspectorPanelForm.ui
  Resources/UI/pqOptionsDialog.ui
  Resources/UI/pqOrbitCreatorDialog.ui
  Resources/UI/pqParallelCoordinatesChartDisplayPanel.ui
#  Resources/UI/pqParticleTracerPanel.ui
  Resources/UI/pqPipelineTimeKeyFrameEditor.ui
  Resources/UI/pqPlotMatrixDisplayPanel.ui
  Resources/UI/pqPlotMatrixOptionsWidget.ui
  Resources/UI/pqPluginDialog.ui
  Resources/UI/pqPointSourceControls.ui
  Resources/UI/pqPropertiesPanel.ui
  Resources/UI/pqProxyInformationWidget.ui
  Resources/UI/pqPythonAnimationCue.ui
  Resources/UI/pqQueryClauseWidget.ui
  Resources/UI/pqQueryCompositeTreeDialog.ui
  Resources/UI/pqQueryDialog.ui
  Resources/UI/pqRemoteCommandDialogForm.ui
  Resources/UI/pqRemoteCommandTemplateDialogForm.ui
  Resources/UI/pqRenderViewOptions.ui
  Resources/UI/pqRescaleRangeDialog.ui
  Resources/UI/pqSampleScalarAddRangeDialog.ui
  Resources/UI/pqSampleScalarWidget.ui
  Resources/UI/pqSaveSnapshotDialog.ui
  Resources/UI/pqSelectionInputWidget.ui
  Resources/UI/pqSelectionInspectorPanel.ui
  Resources/UI/pqSelectReaderDialog.ui
  Resources/UI/pqServerConnectDialog.ui
  Resources/UI/pqServerLauncherDialog.ui
  Resources/UI/pqSphereWidget.ui
  Resources/UI/pqSplineWidget.ui
  Resources/UI/pqSpreadSheetDisplayEditor.ui
  Resources/UI/pqSpreadSheetViewDecorator.ui
  Resources/UI/pqStreamTracerPanel.ui
  Resources/UI/pqTextDisplayPropertiesWidget.ui
  Resources/UI/pqThresholdPanel.ui
  Resources/UI/pqTimerLogDisplay.ui
  Resources/UI/pqWriterDialog.ui
  Resources/UI/pqXYChartDisplayPanel.ui
)

GENERATE_QT_RESOURCE_FROM_FILES(
  "${CMAKE_CURRENT_BINARY_DIR}/pqExtraResources.qrc"
  "/ParaViewResources"
  ${CMAKE_CURRENT_SOURCE_DIR}/Resources/XML/Placeholder.xml
)

set (Module_RESOURCE_FILES
  Resources/pqComponents.qrc
  "${CMAKE_CURRENT_BINARY_DIR}/pqExtraResources.qrc"
)

add_custom_command(
  OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/pqBuiltinColorMaps.h
  DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Resources/XML/ColorMaps.xml
          kwProcessXML
  COMMAND kwProcessXML
  ARGS ${CMAKE_CURRENT_BINARY_DIR}/pqBuiltinColorMaps.h
       pqComponentsGet
       XML
       XML
       ${CMAKE_CURRENT_SOURCE_DIR}/Resources/XML/ColorMaps.xml
  COMMENT "generating built-in color map xml"
)

qt4_wrap_cpp(__Module_MOC_SRCS ${Module_MOC_HDRS})
qt4_wrap_ui(__Module_UI_SRCS ${Module_UI_FILES})
qt4_add_resources(__Module_RESOURCE_SRCS ${Module_RESOURCE_FILES})

SOURCE_GROUP("Resources" FILES
  ${Module_UI_FILES}
  ${Module_RESOURCE_FILES}
)

SOURCE_GROUP("Generated" FILES
  ${__Module_RESOURCE_SRCS}
  ${__Module_MOC_SRCS}
  ${__Module_UI_SRCS}
)

set(${vtk-module}_NO_HeaderTest 1)
vtk_module_library(${vtk-module}
  ${Module_SRCS}
  ${__Module_RESOURCE_SRCS}
  ${__Module_MOC_SRCS}
  ${__Module_UI_SRCS})

#IF (NOT PV_INSTALL_NO_DEVELOPMENT)
#  # Headers
#  GLOB_INSTALL_DEVELOPMENT(
#      ${CMAKE_CURRENT_SOURCE_DIR}
#      ${PV_INSTALL_INCLUDE_DIR}
#      "*.h;*.hxx;*.txx")
#  INSTALL(
#      FILES ${dynamicHeaders}
#      DESTINATION ${PV_INSTALL_INCLUDE_DIR}
#      COMPONENT Development)
#  # QT resources
#  SET(resPath "${CMAKE_CURRENT_SOURCE_DIR}/Resources/XML")
#  GLOB_INSTALL_DEVELOPMENT(
#    "${CMAKE_CURRENT_SOURCE_DIR}"
#    "${PV_INSTALL_INCLUDE_DIR}/Qt/Components/Resources/XML"
#    "${resPath}/*.xml")
#  SET(resPath "${CMAKE_CURRENT_SOURCE_DIR}/Resources/UI")
#  GLOB_INSTALL_DEVELOPMENT(
#    "${CMAKE_CURRENT_SOURCE_DIR}"
#    "${PV_INSTALL_INCLUDE_DIR}/Qt/Components/Resources/UI"
#    "${resPath}/*.ui")
#  SET(resPath "${CMAKE_CURRENT_SOURCE_DIR}/Resources/Icons")
#  GLOB_INSTALL_DEVELOPMENT(
#    "${CMAKE_CURRENT_SOURCE_DIR}"
#    "${PV_INSTALL_INCLUDE_DIR}/Qt/Components/Resources/Icons"
#    "${resPath}/*.ico;${resPath}/*.png;${resPath}/*.svg;${resPath}/*.xpm;${resPath}/*.rc")
#ENDIF (NOT PV_INSTALL_NO_DEVELOPMENT)
