#include "Game.h"
#include "Player_BP__pf39833794.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputTouchDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "DmgTypeBP_Environmental__pf1001828891.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteComponent.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSprite.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/SpriteEditorOnlyTypes.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteAtlas.h"
#include "Runtime/Engine/Classes/Components/SceneCaptureComponent2D.h"
#include "Runtime/Engine/Classes/Components/SceneCaptureComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget.h"
#include "Main_HUD__pf2222656877.h"
#include "QuestActor_BP__pf3834608478.h"
#include "NPC__pf2920574945.h"
#include "Astrid_BP__pf2347287147.h"
#include "Fragment__pf3834608478.h"
#include "Morak_BP__pf1771337269.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Quest_HUD__pf2222656877.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Fragments_Widget__pf2222656877.h"
#include "MiniMapWidget__pf2222656877.h"
#include "CompassWidget__pf2222656877.h"
#include "QuestWidget__pf2222656877.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Quest_Succes__pf2222656877.h"
#include "DialogueWidget__pf3136454991.h"
#include "Player_animation_BP__pf39833794.h"
#include "Runtime/ClothingSystemRuntimeNv/Public/ClothingSimulationFactoryNv.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
APlayer_BP_C__pf39833794::APlayer_BP_C__pf39833794(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	auto __Local__0 = CastChecked<UCapsuleComponent>(this->GetDefaultSubobjectByName(TEXT("CollisionCylinder")), ECastCheckedType::NullAllowed);
	auto __Local__1 = CastChecked<UCharacterMovementComponent>(this->GetDefaultSubobjectByName(TEXT("CharMoveComp")), ECastCheckedType::NullAllowed);
	auto __Local__2 = CastChecked<USkeletalMeshComponent>(this->GetDefaultSubobjectByName(TEXT("CharacterMesh0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'CollisionCylinder' //
		auto& __Local__3 = (*(AccessPrivateProperty<float >((__Local__0), UCapsuleComponent::__PPO__CapsuleHalfHeight() )));
		__Local__3 = 92.000000f;
		auto& __Local__4 = (*(AccessPrivateProperty<float >((__Local__0), UCapsuleComponent::__PPO__CapsuleRadius() )));
		__Local__4 = 20.000000f;
		__Local__0->AreaClass = UNavArea_Obstacle::StaticClass();
		static TWeakFieldPtr<FProperty> __Local__6{};
		const FProperty* __Local__5 = __Local__6.Get();
		if (nullptr == __Local__5)
		{
			__Local__5 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__5);
			__Local__6 = __Local__5;
		}
		(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((__Local__0), false, 0));
		// --- END default subobject 'CollisionCylinder' //
	}
	if(__Local__1)
	{
		// --- Default subobject 'CharMoveComp' //
		static TWeakFieldPtr<FProperty> __Local__8{};
		const FProperty* __Local__7 = __Local__8.Get();
		if (nullptr == __Local__7)
		{
			__Local__7 = (UNavMovementComponent::StaticClass())->FindPropertyByName(FName(TEXT("bUseAccelerationForPaths")));
			check(__Local__7);
			__Local__8 = __Local__7;
		}
		(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((__Local__1), false, 0));
		static TWeakFieldPtr<FProperty> __Local__10{};
		const FProperty* __Local__9 = __Local__10.Get();
		if (nullptr == __Local__9)
		{
			__Local__9 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__9);
			__Local__10 = __Local__9;
		}
		(((FBoolProperty*)__Local__9)->SetPropertyValue_InContainer((__Local__1), false, 0));
		// --- END default subobject 'CharMoveComp' //
	}
	if(__Local__2)
	{
		// --- Default subobject 'CharacterMesh0' //
		__Local__2->AnimClass = UPlayer_animation_BP_C__pf39833794::StaticClass();
		__Local__2->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
		__Local__2->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(APlayer_BP_C__pf39833794::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
		__Local__2->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPose;
		__Local__2->OverrideMaterials = TArray<UMaterialInterface*> ();
		__Local__2->OverrideMaterials.Reserve(2);
		__Local__2->OverrideMaterials.Add(nullptr);
		__Local__2->OverrideMaterials.Add(nullptr);
		auto& __Local__11 = (*(AccessPrivateProperty<UCapsuleComponent*>((__Local__2), USceneComponent::__PPO__AttachParent() )));
		__Local__11 = __Local__0;
		auto& __Local__12 = (*(AccessPrivateProperty<FVector >((__Local__2), USceneComponent::__PPO__RelativeLocation() )));
		__Local__12 = FVector(0.000000, 0.000000, -87.000000);
		auto& __Local__13 = (*(AccessPrivateProperty<FRotator >((__Local__2), USceneComponent::__PPO__RelativeRotation() )));
		__Local__13 = FRotator(0.000000, -90.000000, 0.000000);
		static TWeakFieldPtr<FProperty> __Local__15{};
		const FProperty* __Local__14 = __Local__15.Get();
		if (nullptr == __Local__14)
		{
			__Local__14 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__14);
			__Local__15 = __Local__14;
		}
		(((FBoolProperty*)__Local__14)->SetPropertyValue_InContainer((__Local__2), false, 0));
		// --- END default subobject 'CharacterMesh0' //
	}
	bpv__SpringArm__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	bpv__Camera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	bpv__CharacterIcon__pf = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("CharacterIcon"));
	bpv__SpringArm1__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm1"));
	bpv__MinimapCapture__pf = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("MinimapCapture"));
	bpv__SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SpringArm__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SpringArm__pf->bUsePawnControlRotation = true;
	static TWeakFieldPtr<FProperty> __Local__17{};
	const FProperty* __Local__16 = __Local__17.Get();
	if (nullptr == __Local__16)
	{
		__Local__16 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__16);
		__Local__17 = __Local__16;
	}
	(((FBoolProperty*)__Local__16)->SetPropertyValue_InContainer((bpv__SpringArm__pf), false, 0));
	bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Camera__pf->AttachToComponent(bpv__SpringArm__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__18 = (*(AccessPrivateProperty<FVector >((bpv__Camera__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__18 = FVector(-73.860580, 0.000000, 163.023605);
	auto& __Local__19 = (*(AccessPrivateProperty<FRotator >((bpv__Camera__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__19 = FRotator(-9.999984, 0.000000, 0.000000);
	(((FBoolProperty*)__Local__16)->SetPropertyValue_InContainer((bpv__Camera__pf), false, 0));
	bpv__CharacterIcon__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__CharacterIcon__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__20 = (*(AccessPrivateProperty<UPaperSprite* >((bpv__CharacterIcon__pf), UPaperSpriteComponent::__PPO__SourceSprite() )));
	__Local__20 = CastChecked<UPaperSprite>(CastChecked<UDynamicClass>(APlayer_BP_C__pf39833794::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__CharacterIcon__pf->bOwnerNoSee = true;
	auto& __Local__21 = (*(AccessPrivateProperty<FVector >((bpv__CharacterIcon__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__21 = FVector(0.000488, 0.001974, 239.999023);
	auto& __Local__22 = (*(AccessPrivateProperty<FRotator >((bpv__CharacterIcon__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__22 = FRotator(-0.000007, 0.000002, 89.999954);
	auto& __Local__23 = (*(AccessPrivateProperty<FVector >((bpv__CharacterIcon__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__23 = FVector(1.500000, 1.300000, 1.300000);
	(((FBoolProperty*)__Local__16)->SetPropertyValue_InContainer((bpv__CharacterIcon__pf), true, 0));
	bpv__SpringArm1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SpringArm1__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SpringArm1__pf->TargetArmLength = 1000.000000f;
	bpv__SpringArm1__pf->bInheritPitch = false;
	bpv__SpringArm1__pf->bInheritYaw = false;
	bpv__SpringArm1__pf->bInheritRoll = false;
	auto& __Local__24 = (*(AccessPrivateProperty<FRotator >((bpv__SpringArm1__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__24 = FRotator(-90.000000, 0.000000, 0.000000);
	(((FBoolProperty*)__Local__16)->SetPropertyValue_InContainer((bpv__SpringArm1__pf), false, 0));
	bpv__MinimapCapture__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__MinimapCapture__pf->AttachToComponent(bpv__SpringArm1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__MinimapCapture__pf->ProjectionType = ECameraProjectionMode::Type::Orthographic;
	bpv__MinimapCapture__pf->OrthoWidth = 3000.000000f;
	bpv__MinimapCapture__pf->TextureTarget = CastChecked<UTextureRenderTarget2D>(CastChecked<UDynamicClass>(APlayer_BP_C__pf39833794::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__MinimapCapture__pf->ShowFlagSettings = TArray<FEngineShowFlagsSetting> ();
	bpv__MinimapCapture__pf->ShowFlagSettings.AddUninitialized(1);
	FEngineShowFlagsSetting::StaticStruct()->InitializeStruct(bpv__MinimapCapture__pf->ShowFlagSettings.GetData(), 1);
	auto& __Local__25 = bpv__MinimapCapture__pf->ShowFlagSettings[0];
	__Local__25.ShowFlagName = FString(TEXT("SkeletalMeshes"));
	(((FBoolProperty*)__Local__16)->SetPropertyValue_InContainer((bpv__MinimapCapture__pf), false, 0));
	bpv__MyDialogueWindow__pf = nullptr;
	bpv__DialogueVoice__pf = CastChecked<UDialogueVoice>(CastChecked<UDynamicClass>(APlayer_BP_C__pf39833794::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__Main_HUD__pf = nullptr;
	bpv__Quest_HUD__pf = nullptr;
	bpv__NPCtoINteract__pf = nullptr;
	bpv__canInteract__pf = false;
	bpv__canMove__pf = true;
	bpv__QuestsName__pf = TArray<FString> ();
	bpv__QuestsCompleted__pf = TArray<bool> ();
	bpv__QuestActor__pf = nullptr;
	bpv__QuestIndex__pf = 0;
	bpv__Quest__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__QuestPoint__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__QuestWidget__pf = nullptr;
	bpv__NPCstoINteractArr__pf = TArray<ANPC_C__pf2920574945*> ();
	bpv__QuestCompletedNumber__pf = 0;
	bpv__NumberFragments__pf = 0;
	bpv__AstridFoundx__pfzy = false;
	bpv__AllFragmentsx__pfzy = false;
	bpv__FirstQuest__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[D87C34C2475F8E4355818C956132B4D0]\", \"6280CB7B4723DF4F2BE08A920F09E601\", \"Trouver Astrid\")")	);
	bpv__FirstQuestText__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[D87C34C2475F8E4355818C956132B4D0]\", \"06EA338F4FF0EB8F776C6CA3A9BBC178\", \"Le seul mot que Mike r\u00e9ussit \u00e0 comprendre est \\\"Astrid\\\"\\r\\n\\r\\nTrouver Astrid, elle seule pourra r\u00e9pondre \u00e0 tes questions...\\r\\n\\r\\nC")
		TEXT("omment la trouver? G\u00e9n\u00e9ralement elle se cache et il parait qu\\'elle vise  tr\u00e8s bien\")")	);
	bpv__BianQuest__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[D87C34C2475F8E4355818C956132B4D0]\", \"A74FB31A40571F39DD0FF7AA3176BD2C\", \"Retrouver l\\'espionne\")")	);
	auto& __Local__26 = (*(AccessPrivateProperty<USkeletalMeshComponent*>((this), ACharacter::__PPO__Mesh() )));
	__Local__26 = __Local__2;
	auto& __Local__27 = (*(AccessPrivateProperty<UCharacterMovementComponent*>((this), ACharacter::__PPO__CharacterMovement() )));
	__Local__27 = __Local__1;
	auto& __Local__28 = (*(AccessPrivateProperty<UCapsuleComponent*>((this), ACharacter::__PPO__CapsuleComponent() )));
	__Local__28 = __Local__0;
	auto& __Local__29 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__29 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void APlayer_BP_C__pf39833794::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__SpringArm__pf)
	{
		bpv__SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Camera__pf)
	{
		bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__CharacterIcon__pf)
	{
		bpv__CharacterIcon__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SpringArm1__pf)
	{
		bpv__SpringArm1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__MinimapCapture__pf)
	{
		bpv__MinimapCapture__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void APlayer_BP_C__pf39833794::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	extern UClass* Z_Construct_UClass_UInteract_I_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UInteract_I_C());
	InDynamicClass->ReferencedConvertedFields.Add(UMain_HUD_C__pf2222656877::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AQuestActor_BP_C__pf3834608478::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ANPC_C__pf2920574945::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AAstrid_BP_C__pf2347287147::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AFragment_C__pf3834608478::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AMorak_BP_C__pf1771337269::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UQuest_HUD_C__pf2222656877::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UFragments_Widget_C__pf2222656877::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMiniMapWidget_C__pf2222656877::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UCompassWidget_C__pf2222656877::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UQuestWidget_C__pf2222656877::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UQuest_Succes_C__pf2222656877::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UDialogueWidget_C__pf3136454991::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UPlayer_animation_BP_C__pf39833794::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__30 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__30);
	auto __Local__31 = NewObject<UInputTouchDelegateBinding>(InDynamicClass, UInputTouchDelegateBinding::StaticClass(), TEXT("InputTouchDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__31);
	auto __Local__32 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__32);
	auto __Local__33 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__33);
	static TWeakFieldPtr<FProperty> __Local__35{};
	const FProperty* __Local__34 = __Local__35.Get();
	if (nullptr == __Local__34)
	{
		__Local__34 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__34);
		__Local__35 = __Local__34;
	}
	(((FBoolProperty*)__Local__34)->SetPropertyValue_InContainer((__Local__30), false, 0));
	__Local__31->InputTouchDelegateBindings = TArray<FBlueprintInputTouchDelegateBinding> ();
	__Local__31->InputTouchDelegateBindings.AddUninitialized(2);
	FBlueprintInputTouchDelegateBinding::StaticStruct()->InitializeStruct(__Local__31->InputTouchDelegateBindings.GetData(), 2);
	auto& __Local__36 = __Local__31->InputTouchDelegateBindings[0];
	__Local__36.FunctionNameToBind = FName(TEXT("InpTchEvt_Pressed"));
	auto& __Local__37 = __Local__31->InputTouchDelegateBindings[1];
	__Local__37.InputKeyEvent = EInputEvent::IE_Released;
	__Local__37.FunctionNameToBind = FName(TEXT("InpTchEvt_Released"));
	__Local__32->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__32->InputActionDelegateBindings.AddUninitialized(4);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__32->InputActionDelegateBindings.GetData(), 4);
	auto& __Local__38 = __Local__32->InputActionDelegateBindings[0];
	__Local__38.InputActionName = FName(TEXT("Interact"));
	__Local__38.FunctionNameToBind = FName(TEXT("InpActEvt_Interact_K2Node_InputActionEvent_3"));
	auto& __Local__39 = __Local__32->InputActionDelegateBindings[1];
	__Local__39.InputActionName = FName(TEXT("Jump"));
	__Local__39.InputKeyEvent = EInputEvent::IE_Released;
	__Local__39.FunctionNameToBind = FName(TEXT("InpActEvt_Jump_K2Node_InputActionEvent_2"));
	__Local__39.bOverrideParentBinding = false;
	auto& __Local__40 = __Local__32->InputActionDelegateBindings[2];
	__Local__40.InputActionName = FName(TEXT("Jump"));
	__Local__40.FunctionNameToBind = FName(TEXT("InpActEvt_Jump_K2Node_InputActionEvent_1"));
	__Local__40.bOverrideParentBinding = false;
	auto& __Local__41 = __Local__32->InputActionDelegateBindings[3];
	__Local__41.InputActionName = FName(TEXT("Interact"));
	__Local__41.FunctionNameToBind = FName(TEXT("InpActEvt_Interact_K2Node_InputActionEvent_0"));
	__Local__33->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__33->InputAxisDelegateBindings.AddUninitialized(4);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__33->InputAxisDelegateBindings.GetData(), 4);
	auto& __Local__42 = __Local__33->InputAxisDelegateBindings[0];
	__Local__42.InputAxisName = FName(TEXT("LookUp"));
	__Local__42.FunctionNameToBind = FName(TEXT("InpAxisEvt_LookUp_K2Node_InputAxisEvent_3"));
	auto& __Local__43 = __Local__33->InputAxisDelegateBindings[1];
	__Local__43.InputAxisName = FName(TEXT("Turn"));
	__Local__43.FunctionNameToBind = FName(TEXT("InpAxisEvt_Turn_K2Node_InputAxisEvent_2"));
	auto& __Local__44 = __Local__33->InputAxisDelegateBindings[2];
	__Local__44.InputAxisName = FName(TEXT("MoveRight"));
	__Local__44.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1"));
	auto& __Local__45 = __Local__33->InputAxisDelegateBindings[3];
	__Local__45.InputAxisName = FName(TEXT("MoveForward"));
	__Local__45.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0"));
}
PRAGMA_ENABLE_OPTIMIZATION
void APlayer_BP_C__pf39833794::bpf__ExecuteUbergraph_Player_BP__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_4__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_2__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_3__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	bool bpfv__CallFunc_ActorHasTag_ReturnValue_1__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AFragment_C__pf3834608478* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_5__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_6__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_7__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_2__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_9__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_4__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf{};
	FString bpfv__CallFunc_Conv_TextToString_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_StrStr_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(2);
				__CurrentState = 6;
				break;
			}
		case 2:
			{
			}
		case 3:
			{
			}
		case 4:
			{
			}
		case 5:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable_1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 6:
			{
				bpf__SetxQuestxinxWidget__pfTTT(b0l__Temp_int_Array_Index_Variable_2__pf, FString(TEXT("")));
			}
		case 7:
			{
				bpf__Succes_InOut__pf();
			}
		case 8:
			{
				bpf__AdjustxOrderxQuest__pfTT();
			}
		case 9:
			{
				__StateStack.Push(10);
				__CurrentState = 14;
				break;
			}
		case 10:
			{
			}
		case 11:
			{
				bool  __Local__46 = false;
				if (!((::IsValid(bpv__NPCtoINteract__pf)) ? (bpv__NPCtoINteract__pf->bpv__GiveFragmentx__pfzy) : (__Local__46)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 12:
			{
				if(::IsValid(bpv__NPCtoINteract__pf))
				{
					b0l__CallFunc_GetTransform_ReturnValue__pf = bpv__NPCtoINteract__pf->AActor::GetTransform();
				}
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AFragment_C__pf3834608478::StaticClass(), b0l__CallFunc_GetTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::Undefined, ((AActor*)nullptr));
			}
		case 13:
			{
				if(::IsValid(bpv__NPCtoINteract__pf))
				{
					b0l__CallFunc_GetTransform_ReturnValue__pf = bpv__NPCtoINteract__pf->AActor::GetTransform();
				}
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<AFragment_C__pf3834608478>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, b0l__CallFunc_GetTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				b0l__K2Node_DynamicCast_AsAstrid_BP_1__pf = Cast<AAstrid_BP_C__pf2347287147>(bpv__NPCtoINteract__pf);
				b0l__K2Node_DynamicCast_bSuccess_4__pf = (b0l__K2Node_DynamicCast_AsAstrid_BP_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 15:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__NumberFragments__pf, 3);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 16:
			{
				bpv__AllFragmentsx__pfzy = true;
			}
		case 17:
			{
				bpf__SetxQuestxinxWidget__pfTTT(0, FString(TEXT("Aller au t\u00e9l\u00e9porteur")));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 35:
			{
			}
		case 36:
			{
				if (!bpv__canInteract__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 37:
			{
			}
		case 38:
			{
			}
		case 39:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__NPCtoINteract__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 52;
					break;
				}
			}
		case 40:
			{
			}
		case 41:
			{
				b0l__K2Node_DynamicCast_AsAstrid_BP__pf = Cast<AAstrid_BP_C__pf2347287147>(bpv__NPCtoINteract__pf);
				b0l__K2Node_DynamicCast_bSuccess_3__pf = (b0l__K2Node_DynamicCast_AsAstrid_BP__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = 51;
					break;
				}
			}
		case 42:
			{
				if (!bpv__AstridFoundx__pfzy)
				{
					__CurrentState = 66;
					break;
				}
			}
		case 43:
			{
				bool  __Local__47 = false;
				if (!((::IsValid(bpv__NPCtoINteract__pf)) ? (bpv__NPCtoINteract__pf->bpv__GiveQuestx__pfzy) : (__Local__47)))
				{
					__CurrentState = 70;
					break;
				}
			}
		case 44:
			{
				bool  __Local__48 = false;
				bpfv__CallFunc_Not_PreBool_ReturnValue_4__pf = UKismetMathLibrary::Not_PreBool(((::IsValid(bpv__NPCtoINteract__pf)) ? (bpv__NPCtoINteract__pf->bpv__TookQuest__pf) : (__Local__48)));
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue_4__pf)
				{
					__CurrentState = 77;
					break;
				}
			}
		case 45:
			{
				FText  __Local__49 = FText::GetEmpty();
				if(::IsValid(bpv__Quest_HUD__pf))
				{
					bpv__Quest_HUD__pf->bpv__QuestName__pf = ((::IsValid(bpv__NPCtoINteract__pf)) ? (bpv__NPCtoINteract__pf->bpv__QuestName__pf) : (__Local__49));
				}
			}
		case 46:
			{
				FText  __Local__50 = FText::GetEmpty();
				if(::IsValid(bpv__Quest_HUD__pf))
				{
					bpv__Quest_HUD__pf->bpv__QuestText__pf = ((::IsValid(bpv__NPCtoINteract__pf)) ? (bpv__NPCtoINteract__pf->bpv__QuestText__pf) : (__Local__50));
				}
			}
		case 47:
			{
				if(::IsValid(bpv__Quest_HUD__pf))
				{
					UWidgetAnimation*  __Local__51 = ((UWidgetAnimation*)nullptr);
					bpfv__CallFunc_PlayAnimation_ReturnValue_3__pf = bpv__Quest_HUD__pf->UUserWidget::PlayAnimation(((::IsValid(bpv__Quest_HUD__pf)) ? (bpv__Quest_HUD__pf->bpv__QuestInOut__pf) : (__Local__51)), 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
				}
			}
		case 48:
			{
				bpf__Interact_InOutxEvent__pfT(true);
			}
		case 49:
			{
				bpv__canMove__pf = false;
			}
		case 50:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf->bShowMouseCursor = true;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 51:
			{
				if (!bpv__AstridFoundx__pfzy)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 43;
				break;
			}
		case 52:
			{
			}
		case 53:
			{
			}
		case 54:
			{
			}
		case 55:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__QuestActor__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = 65;
					break;
				}
			}
		case 56:
			{
			}
		case 57:
			{
				if(::IsValid(bpv__QuestActor__pf))
				{
					bpfv__CallFunc_ActorHasTag_ReturnValue_1__pf = bpv__QuestActor__pf->AActor::ActorHasTag(FName(TEXT("Récupérer les 3 fragments")));
				}
				if (!bpfv__CallFunc_ActorHasTag_ReturnValue_1__pf)
				{
					__CurrentState = 64;
					break;
				}
			}
		case 58:
			{
				if(::IsValid(bpv__QuestActor__pf))
				{
					bpv__QuestActor__pf->K2_DestroyActor();
				}
			}
		case 59:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Add_IntInt(bpv__NumberFragments__pf, 1);
				bpv__NumberFragments__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf;
			}
		case 60:
			{
				if(::IsValid(bpv__Main_HUD__pf) && ::IsValid(bpv__Main_HUD__pf->bpv__Fragments_Widget__pf))
				{
					bpv__Main_HUD__pf->bpv__Fragments_Widget__pf->bpv__nbFragments__pf = bpv__NumberFragments__pf;
				}
			}
		case 61:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__NumberFragments__pf, 3);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 62:
			{
				b0l__Temp_bool_Variable__pf = true;
				FCustomThunkTemplates::Array_Set(bpv__QuestsCompleted__pf, bpv__QuestIndex__pf, b0l__Temp_bool_Variable__pf, false);
			}
		case 63:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_4__pf = UKismetMathLibrary::Add_IntInt(bpv__QuestCompletedNumber__pf, 1);
				bpv__QuestCompletedNumber__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_4__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 64:
			{
				if(::IsValid(bpv__QuestActor__pf))
				{
					bpv__QuestActor__pf->K2_DestroyActor();
				}
				__CurrentState = 62;
				break;
			}
		case 65:
			{
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 66:
			{
				bpv__AstridFoundx__pfzy = true;
			}
		case 67:
			{
				if(::IsValid(bpv__Main_HUD__pf) && ::IsValid(bpv__Main_HUD__pf->bpv__MiniMapWidget__pf))
				{
					UWidgetAnimation*  __Local__52 = ((UWidgetAnimation*)nullptr);
					bpfv__CallFunc_PlayAnimation_ReturnValue_7__pf = bpv__Main_HUD__pf->bpv__MiniMapWidget__pf->UUserWidget::PlayAnimation(((::IsValid(bpv__Main_HUD__pf) && ::IsValid(bpv__Main_HUD__pf->bpv__MiniMapWidget__pf)) ? (bpv__Main_HUD__pf->bpv__MiniMapWidget__pf->bpv__ShowMap__pf) : (__Local__52)), 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
				}
			}
		case 68:
			{
				if(::IsValid(bpv__Main_HUD__pf) && ::IsValid(bpv__Main_HUD__pf->bpv__CompassWidget__pf))
				{
					UWidgetAnimation*  __Local__53 = ((UWidgetAnimation*)nullptr);
					bpfv__CallFunc_PlayAnimation_ReturnValue_6__pf = bpv__Main_HUD__pf->bpv__CompassWidget__pf->UUserWidget::PlayAnimation(((::IsValid(bpv__Main_HUD__pf) && ::IsValid(bpv__Main_HUD__pf->bpv__CompassWidget__pf)) ? (bpv__Main_HUD__pf->bpv__CompassWidget__pf->bpv__ShowCompass__pf) : (__Local__53)), 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
				}
			}
		case 69:
			{
				if(::IsValid(bpv__Main_HUD__pf) && ::IsValid(bpv__Main_HUD__pf->bpv__Fragments_Widget__pf))
				{
					UWidgetAnimation*  __Local__54 = ((UWidgetAnimation*)nullptr);
					bpfv__CallFunc_PlayAnimation_ReturnValue_5__pf = bpv__Main_HUD__pf->bpv__Fragments_Widget__pf->UUserWidget::PlayAnimation(((::IsValid(bpv__Main_HUD__pf) && ::IsValid(bpv__Main_HUD__pf->bpv__Fragments_Widget__pf)) ? (bpv__Main_HUD__pf->bpv__Fragments_Widget__pf->bpv__showFragment__pf) : (__Local__54)), 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
				}
				__CurrentState = 43;
				break;
			}
		case 70:
			{
				FText  __Local__55 = FText::GetEmpty();
				if(::IsValid(bpv__Quest_HUD__pf))
				{
					bpv__Quest_HUD__pf->bpv__QuestText__pf = ((::IsValid(bpv__NPCtoINteract__pf)) ? (bpv__NPCtoINteract__pf->bpv__QuestText__pf) : (__Local__55));
				}
			}
		case 71:
			{
				b0l__K2Node_DynamicCast_AsMorak_BP__pf = Cast<AMorak_BP_C__pf1771337269>(bpv__NPCtoINteract__pf);
				b0l__K2Node_DynamicCast_bSuccess_5__pf = (b0l__K2Node_DynamicCast_AsMorak_BP__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_5__pf)
				{
					__CurrentState = 76;
					break;
				}
			}
		case 72:
			{
				if(::IsValid(bpv__Quest_HUD__pf))
				{
					UWidgetAnimation*  __Local__56 = ((UWidgetAnimation*)nullptr);
					bpfv__CallFunc_PlayAnimation_ReturnValue_9__pf = bpv__Quest_HUD__pf->UUserWidget::PlayAnimation(((::IsValid(bpv__Quest_HUD__pf)) ? (bpv__Quest_HUD__pf->bpv__ReponseInOUt__pf) : (__Local__56)), 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
				}
			}
		case 73:
			{
				bpf__Interact_InOutxEvent__pfT(true);
			}
		case 74:
			{
				bpv__canMove__pf = false;
			}
		case 75:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue_2__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue_2__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue_2__pf->bShowMouseCursor = true;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 76:
			{
				if(::IsValid(bpv__Quest_HUD__pf))
				{
					UWidgetAnimation*  __Local__57 = ((UWidgetAnimation*)nullptr);
					bpfv__CallFunc_PlayAnimation_ReturnValue_2__pf = bpv__Quest_HUD__pf->UUserWidget::PlayAnimation(((::IsValid(bpv__Quest_HUD__pf)) ? (bpv__Quest_HUD__pf->bpv__DialogueInOut__pf) : (__Local__57)), 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
				}
				__CurrentState = 73;
				break;
			}
		case 77:
			{
				bool  __Local__58 = false;
				if (!((::IsValid(bpv__NPCtoINteract__pf)) ? (bpv__NPCtoINteract__pf->bpv__QuestCompleted__pf) : (__Local__58)))
				{
					__CurrentState = 78;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 78:
			{
				int32  __Local__59 = 0;
				if (!bpv__QuestsCompleted__pf[((::IsValid(bpv__NPCtoINteract__pf)) ? (bpv__NPCtoINteract__pf->bpv__QuestID__pf) : (__Local__59))])
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 79:
			{
				if(::IsValid(bpv__NPCtoINteract__pf))
				{
					bpv__NPCtoINteract__pf->bpv__QuestCompleted__pf = true;
				}
			}
		case 80:
			{
			}
		case 81:
			{
			}
		case 82:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable_1__pf = false;
			}
		case 83:
			{
				b0l__Temp_int_Loop_Counter_Variable_2__pf = 0;
			}
		case 84:
			{
				b0l__Temp_int_Array_Index_Variable_2__pf = 0;
			}
		case 85:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf = UKismetMathLibrary::Not_PreBool(b0l__Temp_bool_True_if_break_was_hit_Variable_1__pf);
				TArray<FText>  __Local__60 = {};
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(((::IsValid(bpv__QuestWidget__pf)) ? (bpv__QuestWidget__pf->bpv__QuestList__pf) : (__Local__60)));
				bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable_2__pf, bpfv__CallFunc_Array_Length_ReturnValue_2__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf, bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_1__pf)
				{
					__CurrentState = 92;
					break;
				}
			}
		case 86:
			{
				b0l__Temp_int_Array_Index_Variable_2__pf = b0l__Temp_int_Loop_Counter_Variable_2__pf;
			}
		case 87:
			{
				__StateStack.Push(88);
				__CurrentState = 90;
				break;
			}
		case 88:
			{
			}
		case 89:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable_2__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable_2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
				__CurrentState = 85;
				break;
			}
		case 90:
			{
			}
		case 91:
			{
				TArray<FText>  __Local__61 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__QuestWidget__pf)) ? (bpv__QuestWidget__pf->bpv__QuestList__pf) : (__Local__61)), b0l__Temp_int_Array_Index_Variable_2__pf, /*out*/ b0l__CallFunc_Array_Get_Item_2__pf);
				bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(b0l__CallFunc_Array_Get_Item_2__pf);
				int32  __Local__62 = 0;
				bpfv__CallFunc_EqualEqual_StrStr_ReturnValue_1__pf = UKismetStringLibrary::EqualEqual_StrStr(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf, bpv__QuestsName__pf[((::IsValid(bpv__NPCtoINteract__pf)) ? (bpv__NPCtoINteract__pf->bpv__QuestID__pf) : (__Local__62))]);
				if (!bpfv__CallFunc_EqualEqual_StrStr_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 1;
				break;
			}
		case 92:
			{
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void APlayer_BP_C__pf39833794::bpf__ExecuteUbergraph_Player_BP__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_IsOverlappingActor_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 25:
			{
				__StateStack.Push(26);
				__CurrentState = 30;
				break;
			}
		case 26:
			{
			}
		case 27:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 28:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsWithInterface_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 34;
					break;
				}
			}
		case 29:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
				__CurrentState = 25;
				break;
			}
		case 30:
			{
			}
		case 31:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsWithInterface_OutActors__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_IsOverlappingActor_ReturnValue__pf = b0l__CallFunc_Array_Get_Item__pf->AActor::IsOverlappingActor(this);
				}
				if (!bpfv__CallFunc_IsOverlappingActor_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 32:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsWithInterface_OutActors__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if ( b0l__CallFunc_Array_Get_Item__pf && b0l__CallFunc_Array_Get_Item__pf->GetClass()->ImplementsInterface(UInteract_I_C::StaticClass()) )
				{
					b0l__K2Node_DynamicCast_AsInteract_I__pf.SetObject(b0l__CallFunc_Array_Get_Item__pf);
					void* IAddress = b0l__CallFunc_Array_Get_Item__pf->GetInterfaceAddress(UInteract_I_C::StaticClass());
					b0l__K2Node_DynamicCast_AsInteract_I__pf.SetInterface(IAddress);
				}
				else
				{
					b0l__K2Node_DynamicCast_AsInteract_I__pf.SetObject(nullptr);
				}
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsInteract_I__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 33:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsInteract_I__pf))
				{
					IInteract_I_C::Execute_bpf__Interact__pf(b0l__K2Node_DynamicCast_AsInteract_I__pf.GetObject() );
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 34:
			{
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 93:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
				__CurrentState = 28;
				break;
			}
		case 134:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
				__CurrentState = 93;
				break;
			}
		case 197:
			{
				(b0l__CallFunc_GetAllActorsWithInterface_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsWithInterface(this, UInteract_I_C::StaticClass(), /*out*/ b0l__CallFunc_GetAllActorsWithInterface_OutActors__pf);
			}
		case 198:
			{
			}
		case 199:
			{
				__CurrentState = 134;
				break;
			}
		case 211:
			{
				__CurrentState = 197;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void APlayer_BP_C__pf39833794::bpf__ExecuteUbergraph_Player_BP__pf_2(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	UMain_HUD_C__pf2222656877* bpfv__CallFunc_Create_ReturnValue__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_8__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_3__pf{};
	FString bpfv__CallFunc_GetCurrentLevelName_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 18:
			{
			}
		case 19:
			{
				if(::IsValid(bpv__Quest_HUD__pf))
				{
					bpv__Quest_HUD__pf->bpv__QuestName__pf = bpv__FirstQuest__pf;
				}
			}
		case 20:
			{
				if(::IsValid(bpv__Quest_HUD__pf))
				{
					bpv__Quest_HUD__pf->bpv__QuestText__pf = bpv__FirstQuestText__pf;
				}
			}
		case 21:
			{
				if(::IsValid(bpv__Quest_HUD__pf))
				{
					UWidgetAnimation*  __Local__63 = ((UWidgetAnimation*)nullptr);
					bpfv__CallFunc_PlayAnimation_ReturnValue_8__pf = bpv__Quest_HUD__pf->UUserWidget::PlayAnimation(((::IsValid(bpv__Quest_HUD__pf)) ? (bpv__Quest_HUD__pf->bpv__QuestInOut__pf) : (__Local__63)), 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
				}
			}
		case 22:
			{
				bpf__Interact_InOutxEvent__pfT(true);
			}
		case 23:
			{
				bpv__canMove__pf = false;
			}
		case 24:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue_3__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue_3__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue_3__pf->bShowMouseCursor = true;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 182:
			{
				if(::IsValid(bpv__Main_HUD__pf))
				{
					bpv__Main_HUD__pf->UUserWidget::AddToViewport(0);
				}
			}
		case 183:
			{
				UQuest_HUD_C__pf2222656877*  __Local__64 = ((UQuest_HUD_C__pf2222656877*)nullptr);
				bpv__Quest_HUD__pf = ((::IsValid(bpv__Main_HUD__pf)) ? (bpv__Main_HUD__pf->bpv__Quest_HUD__pf) : (__Local__64));
			}
		case 184:
			{
				UQuestWidget_C__pf2222656877*  __Local__65 = ((UQuestWidget_C__pf2222656877*)nullptr);
				bpv__QuestWidget__pf = ((::IsValid(bpv__Quest_HUD__pf)) ? (bpv__Quest_HUD__pf->bpv__QuestWidget__pf) : (__Local__65));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 200:
			{
			}
		case 201:
			{
				__StateStack.Push(202);
				__CurrentState = 209;
				break;
			}
		case 202:
			{
				__StateStack.Push(203);
				__CurrentState = 205;
				break;
			}
		case 203:
			{
			}
		case 204:
			{
				bpfv__CallFunc_K2_SetTimer_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("CheckNPC")), 0.050000, true, 0.050000, 0.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 205:
			{
				bpfv__CallFunc_GetCurrentLevelName_ReturnValue__pf = UGameplayStatics::GetCurrentLevelName(this, true);
			}
		case 206:
			{
				bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf = UKismetStringLibrary::EqualEqual_StrStr(bpfv__CallFunc_GetCurrentLevelName_ReturnValue__pf, FString(TEXT("MapJungle")));
				if (!bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf)
				{
					__CurrentState = 208;
					break;
				}
			}
		case 207:
			{
				bpv__AstridFoundx__pfzy = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 208:
			{
				UKismetSystemLibrary::Delay(this, 9.000000, FLatentActionInfo(18, -1617471043, TEXT("ExecuteUbergraph_Player_BP_2"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 209:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UMain_HUD_C__pf2222656877>(UWidgetBlueprintLibrary::Create(this, UMain_HUD_C__pf2222656877::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 210:
			{
				bpv__Main_HUD__pf = bpfv__CallFunc_Create_ReturnValue__pf;
				__CurrentState = 182;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void APlayer_BP_C__pf39833794::bpf__ExecuteUbergraph_Player_BP__pf_3(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	FName bpfv__CallFunc_Conv_StringToName_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_ActorHasTag_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 98:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					__CurrentState = 99;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 99:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 100:
			{
			}
		case 101:
			{
				__StateStack.Push(102);
				__CurrentState = 105;
				break;
			}
		case 102:
			{
			}
		case 103:
			{
				bpf__CastxFailxReset__pfTT();
			}
		case 104:
			{
				bpf__CastxObjectxReset__pfTT();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 105:
			{
				bpf__Interact_InOutxEvent__pfT(false);
			}
		case 106:
			{
				bpv__NPCtoINteract__pf = b0l__K2Node_DynamicCast_AsNPC__pf;
			}
		case 107:
			{
				bpv__canInteract__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 109:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 110:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 111:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 112:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 109;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 114:
			{
				__StateStack.Push(115);
				__CurrentState = 112;
				break;
			}
		case 115:
			{
				__CurrentState = 98;
				break;
			}
		case 116:
			{
				if (!b0l__Temp_bool_IsClosed_Variable_1__pf)
				{
					__CurrentState = 117;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 117:
			{
				b0l__Temp_bool_IsClosed_Variable_1__pf = true;
			}
		case 118:
			{
			}
		case 119:
			{
				__StateStack.Push(120);
				__CurrentState = 123;
				break;
			}
		case 120:
			{
			}
		case 121:
			{
				bpf__CastxSuccesxResetx__pfTTT();
			}
		case 122:
			{
				bpf__CastxObjectxReset__pfTT();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 123:
			{
				bpf__Interact_InOutxEvent__pfT(true);
			}
		case 124:
			{
				bpv__NPCtoINteract__pf = ((ANPC_C__pf2920574945*)nullptr);
			}
		case 125:
			{
				bpv__canInteract__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 127:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable_1__pf = true;
			}
		case 128:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 129:
			{
				b0l__Temp_bool_IsClosed_Variable_1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 130:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable_1__pf)
				{
					__CurrentState = 127;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 132:
			{
				__StateStack.Push(133);
				__CurrentState = 130;
				break;
			}
		case 133:
			{
				__CurrentState = 116;
				break;
			}
		case 138:
			{
				__StateStack.Push(139);
				__CurrentState = 144;
				break;
			}
		case 139:
			{
			}
		case 140:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable_1__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
			}
		case 141:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b0l__Temp_bool_True_if_break_was_hit_Variable__pf);
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpv__QuestsName__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 143;
					break;
				}
			}
		case 142:
			{
				b0l__Temp_int_Array_Index_Variable_1__pf = b0l__Temp_int_Loop_Counter_Variable_1__pf;
				__CurrentState = 138;
				break;
			}
		case 143:
			{
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 144:
			{
			}
		case 145:
			{
				FCustomThunkTemplates::Array_Get(bpv__QuestsName__pf, b0l__Temp_int_Array_Index_Variable_1__pf, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Conv_StringToName_ReturnValue__pf = UKismetStringLibrary::Conv_StringToName(b0l__CallFunc_Array_Get_Item_1__pf);
				if(::IsValid(b0l__K2Node_DynamicCast_AsQuest_Actor_BP__pf))
				{
					bpfv__CallFunc_ActorHasTag_ReturnValue__pf = b0l__K2Node_DynamicCast_AsQuest_Actor_BP__pf->AActor::ActorHasTag(bpfv__CallFunc_Conv_StringToName_ReturnValue__pf);
				}
				if (!bpfv__CallFunc_ActorHasTag_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 146:
			{
				__StateStack.Push(147);
				__CurrentState = 151;
				break;
			}
		case 147:
			{
			}
		case 148:
			{
			}
		case 149:
			{
			}
		case 150:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 151:
			{
			}
		case 152:
			{
			}
		case 153:
			{
				__StateStack.Push(154);
				__CurrentState = 164;
				break;
			}
		case 154:
			{
			}
		case 155:
			{
				if (!b0l__Temp_bool_IsClosed_Variable_2__pf)
				{
					__CurrentState = 156;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 156:
			{
				b0l__Temp_bool_IsClosed_Variable_2__pf = true;
			}
		case 157:
			{
			}
		case 158:
			{
				bpf__Interact_InOutxEvent__pfT(false);
			}
		case 159:
			{
				bpv__QuestActor__pf = b0l__K2Node_DynamicCast_AsQuest_Actor_BP__pf;
			}
		case 160:
			{
				bpv__QuestIndex__pf = b0l__Temp_int_Array_Index_Variable_1__pf;
			}
		case 161:
			{
				bpv__canInteract__pf = true;
			}
		case 162:
			{
				bpf__CastxFailxReset__pfTT();
			}
		case 163:
			{
				bpf__CastxSuccesxResetx__pfTTT();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 164:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable_2__pf)
				{
					__CurrentState = 165;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 165:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable_2__pf = true;
			}
		case 166:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 167:
			{
				b0l__Temp_bool_IsClosed_Variable_2__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 168:
			{
				b0l__Temp_int_Loop_Counter_Variable_1__pf = 0;
			}
		case 169:
			{
				b0l__Temp_int_Array_Index_Variable_1__pf = 0;
				__CurrentState = 141;
				break;
			}
		case 170:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable__pf = false;
				__CurrentState = 168;
				break;
			}
		case 171:
			{
			}
		case 172:
			{
				__CurrentState = 132;
				break;
			}
		case 213:
			{
			}
		case 214:
			{
				__CurrentState = 114;
				break;
			}
		case 215:
			{
			}
		case 216:
			{
				if(::IsValid(bpv__Camera__pf))
				{
					bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf = bpv__Camera__pf->USceneComponent::GetForwardVector();
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf, 800.000000);
				if(::IsValid(bpv__Camera__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				bpfv__CallFunc_LineTraceSingle_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, ETraceTypeQuery::TraceTypeQuery1, false, b0l__Temp_object_Variable__pf, EDrawDebugTrace::None, /*out*/ b0l__CallFunc_LineTraceSingle_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 0.400000);
			}
		case 217:
			{
				if (!bpfv__CallFunc_LineTraceSingle_ReturnValue__pf)
				{
					__CurrentState = 224;
					break;
				}
			}
		case 218:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				b0l__K2Node_DynamicCast_AsNPC__pf = Cast<ANPC_C__pf2920574945>(b0l__CallFunc_BreakHitResult_HitActor__pf);
				b0l__K2Node_DynamicCast_bSuccess_2__pf = (b0l__K2Node_DynamicCast_AsNPC__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = 221;
					break;
				}
			}
		case 219:
			{
				bool  __Local__67 = false;
				bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf = UKismetMathLibrary::Not_PreBool(((::IsValid(b0l__K2Node_DynamicCast_AsNPC__pf)) ? (b0l__K2Node_DynamicCast_AsNPC__pf->bpv__QuestCompleted__pf) : (__Local__67)));
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 220:
			{
				bool  __Local__68 = false;
				if (!((::IsValid(bpv__Quest_HUD__pf)) ? (bpv__Quest_HUD__pf->bpv__isInterractHidden__pf) : (__Local__68)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 213;
				break;
			}
		case 221:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				b0l__K2Node_DynamicCast_AsQuest_Actor_BP__pf = Cast<AQuestActor_BP_C__pf3834608478>(b0l__CallFunc_BreakHitResult_HitActor__pf);
				b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsQuest_Actor_BP__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 171;
					break;
				}
			}
		case 222:
			{
			}
		case 223:
			{
				__CurrentState = 170;
				break;
			}
		case 224:
			{
				bool  __Local__69 = false;
				bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf = UKismetMathLibrary::Not_PreBool(((::IsValid(bpv__Quest_HUD__pf)) ? (bpv__Quest_HUD__pf->bpv__isInterractHidden__pf) : (__Local__69)));
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 171;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void APlayer_BP_C__pf39833794::bpf__ExecuteUbergraph_Player_BP__pf_4(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_4__pf{};
	check(bpp__EntryPoint__pf == 239);
	if(::IsValid(bpv__Main_HUD__pf) && ::IsValid(bpv__Main_HUD__pf->bpv__Quest_Succes__pf))
	{
		UWidgetAnimation*  __Local__70 = ((UWidgetAnimation*)nullptr);
		bpfv__CallFunc_PlayAnimation_ReturnValue_4__pf = bpv__Main_HUD__pf->bpv__Quest_Succes__pf->UUserWidget::PlayAnimation(((::IsValid(bpv__Main_HUD__pf) && ::IsValid(bpv__Main_HUD__pf->bpv__Quest_Succes__pf)) ? (bpv__Main_HUD__pf->bpv__Quest_Succes__pf->bpv__SuccestInOut__pf) : (__Local__70)), 0.000000, 1, EUMGSequencePlayMode::PingPong, 0.700000, false);
	}
	return; //KCST_EndOfThread
}
void APlayer_BP_C__pf39833794::bpf__ExecuteUbergraph_Player_BP__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 238);
	// optimized KCST_UnconditionalGoto
	// optimized KCST_UnconditionalGoto
	b0l__Temp_bool_IsClosed_Variable_2__pf = false;
	// optimized KCST_UnconditionalGoto
	b0l__Temp_bool_Has_Been_Initd_Variable_2__pf = true;
	return; //KCST_EndOfThread
}
void APlayer_BP_C__pf39833794::bpf__ExecuteUbergraph_Player_BP__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 235);
	b0l__Temp_struct_Variable_1__pf = b0l__K2Node_InputTouchEvent_Location__pf;
	b0l__Temp_byte_Variable__pf = b0l__K2Node_InputTouchEvent_FingerIndex__pf;
	// optimized KCST_UnconditionalGoto
	Jump();
	return; //KCST_EndOfThread
}
void APlayer_BP_C__pf39833794::bpf__ExecuteUbergraph_Player_BP__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 94);
	b0l__Temp_struct_Variable_1__pf = b0l__K2Node_InputTouchEvent_Location_1__pf;
	b0l__Temp_byte_Variable__pf = b0l__K2Node_InputTouchEvent_FingerIndex_1__pf;
	StopJumping();
	return; //KCST_EndOfThread
}
void APlayer_BP_C__pf39833794::bpf__ExecuteUbergraph_Player_BP__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 191);
	if (!bpv__canMove__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	AddControllerYawInput(b0l__K2Node_InputAxisEvent_AxisValue_1__pf);
	return; //KCST_EndOfThread
}
void APlayer_BP_C__pf39833794::bpf__ExecuteUbergraph_Player_BP__pf_9(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 228:
			{
			}
		case 229:
			{
				if (!b0l__K2Node_CustomEvent_Reverse__pf)
				{
					__CurrentState = 232;
					break;
				}
			}
		case 230:
			{
				if(::IsValid(bpv__Quest_HUD__pf))
				{
					UWidgetAnimation*  __Local__71 = ((UWidgetAnimation*)nullptr);
					bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf = bpv__Quest_HUD__pf->UUserWidget::PlayAnimation(((::IsValid(bpv__Quest_HUD__pf)) ? (bpv__Quest_HUD__pf->bpv__InteractInOut__pf) : (__Local__71)), 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.000000, false);
				}
			}
		case 231:
			{
				if(::IsValid(bpv__Quest_HUD__pf))
				{
					bpv__Quest_HUD__pf->bpv__isInterractHidden__pf = true;
				}
				__CurrentState = -1;
				break;
			}
		case 232:
			{
				if(::IsValid(bpv__Quest_HUD__pf))
				{
					UWidgetAnimation*  __Local__72 = ((UWidgetAnimation*)nullptr);
					bpfv__CallFunc_PlayAnimation_ReturnValue__pf = bpv__Quest_HUD__pf->UUserWidget::PlayAnimation(((::IsValid(bpv__Quest_HUD__pf)) ? (bpv__Quest_HUD__pf->bpv__InteractInOut__pf) : (__Local__72)), 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
				}
			}
		case 233:
			{
				if(::IsValid(bpv__Quest_HUD__pf))
				{
					bpv__Quest_HUD__pf->bpv__isInterractHidden__pf = false;
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void APlayer_BP_C__pf39833794::bpf__ExecuteUbergraph_Player_BP__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 194);
	if (!bpv__canMove__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	AddControllerPitchInput(b0l__K2Node_InputAxisEvent_AxisValue__pf);
	return; //KCST_EndOfThread
}
void APlayer_BP_C__pf39833794::bpf__ExecuteUbergraph_Player_BP__pf_11(int32 bpp__EntryPoint__pf)
{
	FRotator bpfv__CallFunc_GetControlRotation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 185);
	if (!bpv__canMove__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_GetControlRotation_ReturnValue__pf = APawn::GetControlRotation();
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_GetControlRotation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b0l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_GetForwardVector_ReturnValue__pf = UKismetMathLibrary::GetForwardVector(bpfv__CallFunc_MakeRotator_ReturnValue__pf);
	AddMovementInput(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, b0l__K2Node_InputAxisEvent_AxisValue_3__pf, false);
	return; //KCST_EndOfThread
}
void APlayer_BP_C__pf39833794::bpf__ExecuteUbergraph_Player_BP__pf_12(int32 bpp__EntryPoint__pf)
{
	FRotator bpfv__CallFunc_GetControlRotation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetRightVector_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 188);
	if (!bpv__canMove__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_GetControlRotation_ReturnValue__pf = APawn::GetControlRotation();
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_GetControlRotation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b0l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_GetRightVector_ReturnValue__pf = UKismetMathLibrary::GetRightVector(bpfv__CallFunc_MakeRotator_ReturnValue__pf);
	AddMovementInput(bpfv__CallFunc_GetRightVector_ReturnValue__pf, b0l__K2Node_InputAxisEvent_AxisValue_2__pf, false);
	return; //KCST_EndOfThread
}
void APlayer_BP_C__pf39833794::bpf__ExecuteUbergraph_Player_BP__pf_13(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 225);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_bool_IsClosed_Variable__pf = false;
	// optimized KCST_UnconditionalGoto
	b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
	return; //KCST_EndOfThread
}
void APlayer_BP_C__pf39833794::bpf__ExecuteUbergraph_Player_BP__pf_14(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 234);
	// optimized KCST_UnconditionalGoto
	// optimized KCST_UnconditionalGoto
	b0l__Temp_bool_IsClosed_Variable_1__pf = false;
	// optimized KCST_UnconditionalGoto
	b0l__Temp_bool_Has_Been_Initd_Variable_1__pf = true;
	return; //KCST_EndOfThread
}
void APlayer_BP_C__pf39833794::bpf__ExecuteUbergraph_Player_BP__pf_15(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 173);
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key_2__pf;
	StopJumping();
	return; //KCST_EndOfThread
}
void APlayer_BP_C__pf39833794::bpf__ExecuteUbergraph_Player_BP__pf_16(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 135);
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key_1__pf;
	Jump();
	return; //KCST_EndOfThread
}
void APlayer_BP_C__pf39833794::bpf__Succes_InOut__pf()
{
	bpf__ExecuteUbergraph_Player_BP__pf_4(239);
}
void APlayer_BP_C__pf39833794::bpf__CastxObjectxReset__pfTT()
{
	bpf__ExecuteUbergraph_Player_BP__pf_5(238);
}
void APlayer_BP_C__pf39833794::bpf__CastxFailxReset__pfTT()
{
	bpf__ExecuteUbergraph_Player_BP__pf_14(234);
}
void APlayer_BP_C__pf39833794::bpf__Interact_InOutxEvent__pfT(bool bpp__Reverse__pf__const)
{
	typedef bool  T__Local__73;
	T__Local__73& bpp__Reverse__pf = *const_cast<T__Local__73 *>(&bpp__Reverse__pf__const);
	b0l__K2Node_CustomEvent_Reverse__pf = bpp__Reverse__pf;
	bpf__ExecuteUbergraph_Player_BP__pf_9(228);
}
void APlayer_BP_C__pf39833794::bpf__CastxSuccesxResetx__pfTTT()
{
	bpf__ExecuteUbergraph_Player_BP__pf_13(225);
}
void APlayer_BP_C__pf39833794::bpf__CheckNPC__pf()
{
	bpf__ExecuteUbergraph_Player_BP__pf_3(215);
}
void APlayer_BP_C__pf39833794::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_Player_BP__pf_2(200);
}
void APlayer_BP_C__pf39833794::bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_3__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_Player_BP__pf_10(194);
}
void APlayer_BP_C__pf39833794::bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_2__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_1__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_Player_BP__pf_8(191);
}
void APlayer_BP_C__pf39833794::bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_2__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_Player_BP__pf_12(188);
}
void APlayer_BP_C__pf39833794::bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_3__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_Player_BP__pf_11(185);
}
void APlayer_BP_C__pf39833794::bpf__InpActEvt_Interact_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_Player_BP__pf_0(35);
}
void APlayer_BP_C__pf39833794::bpf__InpTchEvt_Pressed__pf(ETouchIndex::Type bpp__FingerIndex__pf, FVector bpp__Location__pf)
{
	b0l__K2Node_InputTouchEvent_FingerIndex__pf = bpp__FingerIndex__pf;
	b0l__K2Node_InputTouchEvent_Location__pf = bpp__Location__pf;
	bpf__ExecuteUbergraph_Player_BP__pf_6(235);
}
void APlayer_BP_C__pf39833794::bpf__InpTchEvt_Released__pf(ETouchIndex::Type bpp__FingerIndex__pf, FVector bpp__Location__pf)
{
	b0l__K2Node_InputTouchEvent_FingerIndex_1__pf = bpp__FingerIndex__pf;
	b0l__K2Node_InputTouchEvent_Location_1__pf = bpp__Location__pf;
	bpf__ExecuteUbergraph_Player_BP__pf_7(94);
}
void APlayer_BP_C__pf39833794::bpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_Player_BP__pf_16(135);
}
void APlayer_BP_C__pf39833794::bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_Player_BP__pf_15(173);
}
void APlayer_BP_C__pf39833794::bpf__InpActEvt_Interact_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_Player_BP__pf_1(211);
}
void APlayer_BP_C__pf39833794::bpf__SetxQuestxinxWidget__pfTTT(int32 bpp__index__pf, const FString& bpp__Text__pf__const)
{
	typedef FString  T__Local__74;
	T__Local__74& bpp__Text__pf = *const_cast<T__Local__74 *>(&bpp__Text__pf__const);
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_3__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_4__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 32;
	do
	{
		switch( __CurrentState )
		{
		case 32:
			{
			}
		case 1:
			{
			}
		case 2:
			{
			}
		case 3:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 5:
			{
				TArray<FText>  __Local__75 = {};
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(((::IsValid(bpv__QuestWidget__pf)) ? (bpv__QuestWidget__pf->bpv__QuestList__pf) : (__Local__75)));
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 6:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 7:
			{
				__StateStack.Push(8);
				__CurrentState = 11;
				break;
			}
		case 8:
			{
			}
		case 9:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 5;
				break;
			}
		case 10:
			{
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
			}
		case 12:
			{
				__StateStack.Push(13);
				__CurrentState = 23;
				break;
			}
		case 13:
			{
				__StateStack.Push(14);
				__CurrentState = 20;
				break;
			}
		case 14:
			{
				__StateStack.Push(15);
				__CurrentState = 26;
				break;
			}
		case 15:
			{
				__StateStack.Push(16);
				__CurrentState = 29;
				break;
			}
		case 16:
			{
			}
		case 17:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__index__pf, 4);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 18:
			{
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpp__Text__pf);
				if(::IsValid(bpv__QuestWidget__pf))
				{
					bpv__QuestWidget__pf->bpv__Quest4__pf = bpfv__CallFunc_Conv_StringToText_ReturnValue__pf;
				}
			}
		case 19:
			{
				TArray<FText>  __Local__76 = {};
				FText  __Local__77 = FText::GetEmpty();
				FCustomThunkTemplates::Array_Set(((::IsValid(bpv__QuestWidget__pf)) ? (bpv__QuestWidget__pf->bpv__QuestList__pf) : (__Local__76)), 4, ((::IsValid(bpv__QuestWidget__pf)) ? (bpv__QuestWidget__pf->bpv__Quest4__pf) : (__Local__77)), false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_3__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__index__pf, 1);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 21:
			{
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpp__Text__pf);
				if(::IsValid(bpv__QuestWidget__pf))
				{
					bpv__QuestWidget__pf->bpv__Quest1__pf = bpfv__CallFunc_Conv_StringToText_ReturnValue__pf;
				}
			}
		case 22:
			{
				TArray<FText>  __Local__78 = {};
				FText  __Local__79 = FText::GetEmpty();
				FCustomThunkTemplates::Array_Set(((::IsValid(bpv__QuestWidget__pf)) ? (bpv__QuestWidget__pf->bpv__QuestList__pf) : (__Local__78)), 1, ((::IsValid(bpv__QuestWidget__pf)) ? (bpv__QuestWidget__pf->bpv__Quest1__pf) : (__Local__79)), false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_4__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__index__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 24:
			{
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpp__Text__pf);
				if(::IsValid(bpv__QuestWidget__pf))
				{
					bpv__QuestWidget__pf->bpv__Quest0__pf = bpfv__CallFunc_Conv_StringToText_ReturnValue__pf;
				}
			}
		case 25:
			{
				TArray<FText>  __Local__80 = {};
				FText  __Local__81 = FText::GetEmpty();
				FCustomThunkTemplates::Array_Set(((::IsValid(bpv__QuestWidget__pf)) ? (bpv__QuestWidget__pf->bpv__QuestList__pf) : (__Local__80)), 0, ((::IsValid(bpv__QuestWidget__pf)) ? (bpv__QuestWidget__pf->bpv__Quest0__pf) : (__Local__81)), false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 26:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__index__pf, 2);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 27:
			{
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpp__Text__pf);
				if(::IsValid(bpv__QuestWidget__pf))
				{
					bpv__QuestWidget__pf->bpv__Quest2__pf = bpfv__CallFunc_Conv_StringToText_ReturnValue__pf;
				}
			}
		case 28:
			{
				TArray<FText>  __Local__82 = {};
				FText  __Local__83 = FText::GetEmpty();
				FCustomThunkTemplates::Array_Set(((::IsValid(bpv__QuestWidget__pf)) ? (bpv__QuestWidget__pf->bpv__QuestList__pf) : (__Local__82)), 2, ((::IsValid(bpv__QuestWidget__pf)) ? (bpv__QuestWidget__pf->bpv__Quest2__pf) : (__Local__83)), false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 29:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__index__pf, 3);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 30:
			{
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpp__Text__pf);
				if(::IsValid(bpv__QuestWidget__pf))
				{
					bpv__QuestWidget__pf->bpv__Quest3__pf = bpfv__CallFunc_Conv_StringToText_ReturnValue__pf;
				}
			}
		case 31:
			{
				TArray<FText>  __Local__84 = {};
				FText  __Local__85 = FText::GetEmpty();
				FCustomThunkTemplates::Array_Set(((::IsValid(bpv__QuestWidget__pf)) ? (bpv__QuestWidget__pf->bpv__QuestList__pf) : (__Local__84)), 3, ((::IsValid(bpv__QuestWidget__pf)) ? (bpv__QuestWidget__pf->bpv__Quest3__pf) : (__Local__85)), false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void APlayer_BP_C__pf39833794::bpf__AdjustxOrderxQuest__pfTT()
{
	bool bpfv__Temp_bool_True_if_break_was_hit_Variable__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	bool bpfv__Temp_bool_True_if_break_was_hit_Variable_1__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable_1__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable_2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	bool bpfv__Temp_bool_True_if_break_was_hit_Variable_2__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable_2__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf{};
	FText bpfv__CallFunc_Array_Get_Item__pf{};
	FText bpfv__CallFunc_Array_Get_Item_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_TextText_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_TextIsEmpty_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Array_Get_Item_2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 54;
	do
	{
		switch( __CurrentState )
		{
		case 54:
			{
			}
		case 1:
			{
			}
		case 2:
			{
			}
		case 3:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable_2__pf = false;
			}
		case 4:
			{
				bpfv__Temp_int_Loop_Counter_Variable_2__pf = 0;
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable_2__pf = 0;
			}
		case 6:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf = UKismetMathLibrary::Not_PreBool(bpfv__Temp_bool_True_if_break_was_hit_Variable_2__pf);
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(bpv__QuestsCompleted__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable_2__pf, bpfv__CallFunc_Array_Length_ReturnValue_2__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_2__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf, bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_2__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 7:
			{
				bpfv__Temp_int_Array_Index_Variable_2__pf = bpfv__Temp_int_Loop_Counter_Variable_2__pf;
			}
		case 8:
			{
				__StateStack.Push(9);
				__CurrentState = 12;
				break;
			}
		case 9:
			{
			}
		case 10:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable_2__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable_2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
				__CurrentState = 6;
				break;
			}
		case 11:
			{
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
			}
		case 13:
			{
				FCustomThunkTemplates::Array_Get(bpv__QuestsCompleted__pf, bpfv__Temp_int_Array_Index_Variable_2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_2__pf);
				if (!bpfv__CallFunc_Array_Get_Item_2__pf)
				{
					__CurrentState = 14;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
			}
		case 15:
			{
			}
		case 16:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable_1__pf = false;
			}
		case 17:
			{
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = 0;
			}
		case 18:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = 0;
			}
		case 19:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf = UKismetMathLibrary::Not_PreBool(bpfv__Temp_bool_True_if_break_was_hit_Variable_1__pf);
				TArray<FText>  __Local__86 = {};
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(((::IsValid(bpv__QuestWidget__pf)) ? (bpv__QuestWidget__pf->bpv__QuestList__pf) : (__Local__86)));
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf, bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_1__pf)
				{
					__CurrentState = 44;
					break;
				}
			}
		case 20:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = bpfv__Temp_int_Loop_Counter_Variable_1__pf;
			}
		case 21:
			{
				__StateStack.Push(22);
				__CurrentState = 24;
				break;
			}
		case 22:
			{
			}
		case 23:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 19;
				break;
			}
		case 24:
			{
			}
		case 25:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Greater_IntInt(bpfv__Temp_int_Array_Index_Variable_2__pf, bpfv__Temp_int_Array_Index_Variable_1__pf);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 26:
			{
				TArray<FText>  __Local__87 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__QuestWidget__pf)) ? (bpv__QuestWidget__pf->bpv__QuestList__pf) : (__Local__87)), bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_TextIsEmpty_ReturnValue__pf = UKismetTextLibrary::TextIsEmpty(bpfv__CallFunc_Array_Get_Item_1__pf);
				if (!bpfv__CallFunc_TextIsEmpty_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 27:
			{
				__StateStack.Push(28);
				__CurrentState = 32;
				break;
			}
		case 28:
			{
			}
		case 29:
			{
			}
		case 30:
			{
			}
		case 31:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable_1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 32:
			{
				bpf__SetxQuestxinxWidget__pfTTT(bpfv__Temp_int_Array_Index_Variable_1__pf, bpv__QuestsName__pf[bpfv__Temp_int_Array_Index_Variable_2__pf]);
			}
		case 33:
			{
			}
		case 34:
			{
			}
		case 35:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable__pf = false;
			}
		case 36:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 37:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 38:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__Temp_bool_True_if_break_was_hit_Variable__pf);
				TArray<FText>  __Local__88 = {};
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(((::IsValid(bpv__QuestWidget__pf)) ? (bpv__QuestWidget__pf->bpv__QuestList__pf) : (__Local__88)));
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_Less_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 43;
					break;
				}
			}
		case 39:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 40:
			{
				__StateStack.Push(41);
				__CurrentState = 45;
				break;
			}
		case 41:
			{
			}
		case 42:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 38;
				break;
			}
		case 43:
			{
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 44:
			{
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 45:
			{
			}
		case 46:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__Temp_int_Array_Index_Variable__pf, bpfv__Temp_int_Array_Index_Variable_1__pf);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 47:
			{
				TArray<FText>  __Local__89 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__QuestWidget__pf)) ? (bpv__QuestWidget__pf->bpv__QuestList__pf) : (__Local__89)), bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				TArray<FText>  __Local__90 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__QuestWidget__pf)) ? (bpv__QuestWidget__pf->bpv__QuestList__pf) : (__Local__90)), bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_EqualEqual_TextText_ReturnValue__pf = UKismetTextLibrary::EqualEqual_TextText(bpfv__CallFunc_Array_Get_Item__pf, bpfv__CallFunc_Array_Get_Item_1__pf);
				if (!bpfv__CallFunc_EqualEqual_TextText_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 48:
			{
				__StateStack.Push(49);
				__CurrentState = 53;
				break;
			}
		case 49:
			{
			}
		case 50:
			{
			}
		case 51:
			{
			}
		case 52:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 53:
			{
				bpf__SetxQuestxinxWidget__pfTTT(bpfv__Temp_int_Array_Index_Variable__pf, FString(TEXT("")));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void APlayer_BP_C__pf39833794::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Mannequin/Player/Ch42_nonPBR.Ch42_nonPBR 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperSprite /Game/ThirdPersonBP/Blueprints/Sprite_Images/PlayerIconMapGray_Sprite.PlayerIconMapGray_Sprite 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  TextureRenderTarget2D /Game/ThirdPersonBP/Blueprints/Minimap_RenderTarget.Minimap_RenderTarget 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DialogueVoice /Game/Avatars/Voices/Player.Player 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void APlayer_BP_C__pf39833794::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{4, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpringArmComponent 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Paper2D.PaperSpriteComponent 
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneCaptureComponent2D 
		{8, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{9, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/InputCore.ETouchIndex 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{14, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{29, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{30, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DialogueVoice 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Mannequin/Player/Ch42_nonPBR_Skeleton.Ch42_nonPBR_Skeleton 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{40, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/Mannequin/Player/Player_idle.Player_idle 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperSprite /Game/ThirdPersonBP/Blueprints/Sprite_Images/Wood_Sprite.Wood_Sprite 
		{-1, FBlueprintDependencyType(false, false, false, false), FBlueprintDependencyType(false, false, false, false)},  // Editor Only asset Class /Script/Blutility.EditorUtilityWidget 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Avatars/Morak/Fishing_Cast_Anim_mixamo_com.Fishing_Cast_Anim_mixamo_com 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Avatars/Morak/Fishing_Cast.Fishing_Cast 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Memory/memory_UE4_Sphere_001.memory_UE4_Sphere_001 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Memory/SphereMat.SphereMat 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ThirdPersonBP/Blueprints/Compass_Points.Compass_Points 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ThirdPersonBP/Blueprints/Sprite_Images/Quest_Main.Quest_Main 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ThirdPersonBP/Blueprints/Sprite_Images/quest.quest 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanel 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/ThirdPersonBP/Blueprints/MiniMap_Material.MiniMap_Material 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ThirdPersonBP/Blueprints/Sprite_Images/fragment2.fragment2 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperSprite /Game/ThirdPersonBP/Blueprints/Sprite_Images/WoodPlanche_Sprite.WoodPlanche_Sprite 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperSprite /Game/ThirdPersonBP/Blueprints/Sprite_Images/ClearWood_Sprite.ClearWood_Sprite 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.EditableText 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshActor 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/LevelSequence.LevelSequenceActor 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.DialogueContext 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DialogueWave 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mannequin/Animations/ThirdPersonIdle.ThirdPersonIdle 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Mannequin/Character/Mesh/SK_Mannequin.SK_Mannequin 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Avatars/Astrid/Standing_Idle_03_Examine__1__Anim.Standing_Idle_03_Examine__1__Anim 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Avatars/Astrid/Standing_Idle_03_Examine__1_.Standing_Idle_03_Examine__1_ 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Memory/memory_UE4_Cube.memory_UE4_Cube 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Memory/CubeMat.CubeMat 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cylinder.Cylinder 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Memory/Interact_I.Interact_I_C 
		{-1, FBlueprintDependencyType(false, false, false, false), FBlueprintDependencyType(false, false, false, false)},  // Editor Only asset WidgetBlueprintGeneratedClass /Game/ThirdPersonBP/Blueprints/Main_HUD.Main_HUD_C 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/QuestObjects/QuestActor_BP.QuestActor_BP_C 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Avatars/NPC.NPC_C 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Avatars/Astrid/Astrid_BP.Astrid_BP_C 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/QuestObjects/Fragment.Fragment_C 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Avatars/Morak/Morak_BP.Morak_BP_C 
		{-1, FBlueprintDependencyType(false, false, false, false), FBlueprintDependencyType(false, false, false, false)},  // Editor Only asset WidgetBlueprintGeneratedClass /Game/ThirdPersonBP/Blueprints/Quest_HUD.Quest_HUD_C 
		{-1, FBlueprintDependencyType(false, false, false, false), FBlueprintDependencyType(false, false, false, false)},  // Editor Only asset WidgetBlueprintGeneratedClass /Game/ThirdPersonBP/Blueprints/Fragments_Widget.Fragments_Widget_C 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/ThirdPersonBP/Blueprints/MiniMapWidget.MiniMapWidget_C 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/ThirdPersonBP/Blueprints/CompassWidget.CompassWidget_C 
		{-1, FBlueprintDependencyType(false, false, false, false), FBlueprintDependencyType(false, false, false, false)},  // Editor Only asset WidgetBlueprintGeneratedClass /Game/ThirdPersonBP/Blueprints/QuestWidget.QuestWidget_C 
		{-1, FBlueprintDependencyType(false, false, false, false), FBlueprintDependencyType(false, false, false, false)},  // Editor Only asset WidgetBlueprintGeneratedClass /Game/ThirdPersonBP/Blueprints/Quest_Succes.Quest_Succes_C 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Dialogue/DialogueWidget.DialogueWidget_C 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Mannequin/Player/Player_animation_BP.Player_animation_BP_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__APlayer_BP_C__pf39833794
{
	FRegisterHelper__APlayer_BP_C__pf39833794()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Mannequin/Player/Player_BP"), &APlayer_BP_C__pf39833794::__StaticDependenciesAssets);
	}
	static FRegisterHelper__APlayer_BP_C__pf39833794 Instance;
};
FRegisterHelper__APlayer_BP_C__pf39833794 FRegisterHelper__APlayer_BP_C__pf39833794::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
