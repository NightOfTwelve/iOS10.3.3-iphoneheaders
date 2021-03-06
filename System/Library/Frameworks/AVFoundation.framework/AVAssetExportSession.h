/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetExportSessionInternal, NSString, AVAsset, NSURL, NSError;

@interface AVAssetExportSession : NSObject {

	AVAssetExportSessionInternal* _exportSession;

}

@property (nonatomic,readonly) NSString * presetName; 
@property (nonatomic,retain,readonly) AVAsset * asset; 
@property (nonatomic,copy) NSString * outputFileType; 
@property (nonatomic,copy) NSURL * outputURL; 
@property (assign,nonatomic) char shouldOptimizeForNetworkUse; 
@property (nonatomic,readonly) int status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) float progress; 
+(id)allExportPresets;
+(id)_audioVideoPresets;
+(int)_getPassthroughExportPolicyForAssetTrack:(id)arg1 fileType:(id)arg2 asChapterTrack:(char)arg3 ;
+(id)_asynchronousDispatchQueue;
+(char)_isExportPreset:(id)arg1 compatibleWithAsset:(id)arg2 outputFileType:(id)arg3 ;
+(SCD_Struct_AV2)_maximumDurationForPreset:(id)arg1 fileSizeBytesLimit:(long long)arg2 properties:(id)arg3 ;
+(long long)_estimatedOutputFileLengthForPreset:(id)arg1 duration:(SCD_Struct_AV2)arg2 properties:(id)arg3 ;
+(id)_settingForPreset:(id)arg1 ;
+(id)_mediaTypesToStripOnPassthroughExport;
+(id)_mediaTypesToFailPassthroughExport;
+(char)_isPassthroughExportSupportedForFormatDescription:(opaqueCMFormatDescriptionRef)arg1 forFileType:(CFStringRef)arg2 asChapterTrack:(char)arg3 ;
+(id)_utTypesForPresets;
+(char)_canWriteMediaOfAsset:(id)arg1 toFileType:(id)arg2 ;
+(id)keyPathsForValuesAffectingEstimatedOutputFileLength;
+(id)_audioOnlyPresets;
+(id)_utTypesForDefaultPassthroughPreset;
+(char)_isPassthroughExportSupportedForAudioFormatDescription:(opaqueCMFormatDescriptionRef)arg1 forFileType:(CFStringRef)arg2 asChapterTrack:(char)arg3 usingModifiedFormatDescription:(const opaqueCMFormatDescription*)arg4 ;
+(id)_utTypesForAudioOnly;
+(char)_failsAudioPassthroughRestrictions:(id)arg1 outputFileType:(id)arg2 ;
+(id)_videoOnlyPresets;
+(char)_isNonPassthroughExportPreset:(id)arg1 compatibleWithAssetContainingPlayableAudio:(char)arg2 playableVideo:(char)arg3 outputFileType:(id)arg4 ;
+(char)_disableExportCompatibilityCheck;
+(char)_isPassthroughExportPresetCompatibleWithAsset:(id)arg1 outputFileType:(id)arg2 ;
+(char)_isNonPassthroughExportPreset:(id)arg1 compatibleWithAsset:(id)arg2 outputFileType:(id)arg3 ;
+(id)_figRemakerNotificationNames;
+(char)_disablePassthrough;
+(id)_temporalMetadataPresetBlacklist;
+(long long)estimatedOutputFileLengthForPreset:(id)arg1 duration:(SCD_Struct_AV2)arg2 properties:(id)arg3 ;
+(id)exportPresetsCompatibleWithAsset:(id)arg1 ;
+(void)determineCompatibilityOfExportPreset:(id)arg1 withAsset:(id)arg2 outputFileType:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(SCD_Struct_AV2)maximumDurationForPreset:(id)arg1 properties:(id)arg2 ;
+(id)exportSessionWithAsset:(id)arg1 presetName:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(float)progress;
-(AVAsset *)asset;
-(int)status;
-(NSURL *)outputURL;
-(void)setOutputURL:(NSURL *)arg1 ;
-(id)customVideoCompositor;
-(id)audioMix;
-(id)audioTimePitchAlgorithm;
-(void)setAudioTimePitchAlgorithm:(id)arg1 ;
-(char)shouldOptimizeForNetworkUse;
-(id)directoryForTemporaryFiles;
-(void)setDirectoryForTemporaryFiles:(id)arg1 ;
-(NSString *)outputFileType;
-(id)metadataItemFilter;
-(SCD_Struct_AV2)minVideoFrameDuration;
-(id)videoFrameRateConversionAlgorithm;
-(void)_removeListeners;
-(id)_actualPresetName;
-(id)_determineCompatibleFileTypes;
-(id)_actualOutputFileType;
-(void)_validateOutputFileTypeForExport;
-(void)_transitionToStatus:(int)arg1 error:(id)arg2 ;
-(void)_createRemakerAndBeginExport;
-(char)_validateSettablePropertiesReturningError:(id*)arg1 ;
-(id)_createFigRemaker:(OpaqueFigRemaker*)arg1 ;
-(void)_addListeners;
-(void)determineCompatibleFileTypesWithCompletionHandler:(/*^block*/id)arg1 ;
-(SCD_Struct_AV2)maxDuration;
-(void)setMinVideoFrameDuration:(SCD_Struct_AV2)arg1 ;
-(void)setVideoFrameRateConversionAlgorithm:(id)arg1 ;
-(char)_canPerformFastFrameRateConversionWithPreset:(id)arg1 usingRemaker:(OpaqueFigRemakerRef)arg2 ;
-(long long)estimatedOutputFileLength;
-(long long)fileLengthLimit;
-(void)setFileLengthLimit:(long long)arg1 ;
-(char)canPerformMultiplePassesOverSourceMediaData;
-(void)setCanPerformMultiplePassesOverSourceMediaData:(char)arg1 ;
-(CGSize)_getUntransformedSourceDimension;
-(void)_handleFigRemakerNotification:(id)arg1 payload:(id)arg2 ;
-(id)_actualSettingForPreset:(id)arg1 ;
-(float)_getSourceVideoFrameRate;
-(int)_averageBitRateForSourceAndPreset:(id)arg1 targetFrameRate:(float)arg2 ;
-(id)_addAudioPassthroughTrack:(id)arg1 asChapterTrack:(char)arg2 toFigRemaker:(OpaqueFigRemakerRef)arg3 returningTrackID:(int*)arg4 ;
-(id)_effectiveColorPropertiesForVideoSetting:(id)arg1 ;
-(void)_createFormatWriterOptions:(id*)arg1 forFileFormat:(id)arg2 ;
-(id)_remakerOptionsForFileFormat:(id)arg1 ;
-(id)_settingForFigRemaker;
-(char)_canPassThroughVideo:(id)arg1 remaker:(OpaqueFigRemakerRef)arg2 checkEnabled:(char)arg3 checkAll:(char)arg4 checkProtected:(char)arg5 ;
-(char)_canPassThroughAudio:(id)arg1 checkEnabled:(char)arg2 checkProtected:(char)arg3 ;
-(char)_canPassThroughTemporalMetadata;
-(char)_hasProtectedNonAudioVideoTracks;
-(char)_totalSizeOfTracksIsWithinFileLengthLimit:(id)arg1 forSetting:(id)arg2 ;
-(id)_addTracksAndPropertiesToFigRemakerForPassthroughExport:(OpaqueFigRemakerRef)arg1 ;
-(char)_isAudioMixdownRequired:(CFStringRef)arg1 error:(id*)arg2 ;
-(int)_getTrackCountOfType:(id)arg1 checkEnabled:(char)arg2 ;
-(id)_retrieveChannelSpecificAudioSettingForAudioTrack:(id)arg1 fromAudioSetting:(id)arg2 ;
-(id)_videoCompressionPropertiesForVideoSetting:(id)arg1 targetFrameRate:(float)arg2 ;
-(id)_videoScalingPropertiesForVideoSetting:(id)arg1 ;
-(id)_videoCompositionProcessorProperties;
-(id)_videoProcessingOptionsForVideoSetting:(id)arg1 withRemaker:(OpaqueFigRemakerRef)arg2 ;
-(id)_audioProcessingOptions;
-(void)_transferTrackProperties:(OpaqueFigRemakerRef)arg1 sourceTrackID:(int)arg2 destinationTrackID:(int)arg3 ;
-(id)_actualSettingForPresetAppleM4VAppleTV:(id)arg1 ;
-(void)_handleFigRemakerNotificationAsync:(id)arg1 payload:(id)arg2 ;
-(NSString *)presetName;
-(void)setShouldOptimizeForNetworkUse:(char)arg1 ;
-(void)setMetadataItemFilter:(id)arg1 ;
-(void)cancelExport;
-(id)initWithAsset:(id)arg1 presetName:(id)arg2 ;
-(id)metadata;
-(void)setMetadata:(id)arg1 ;
-(void)setVideoComposition:(id)arg1 ;
-(id)supportedFileTypes;
-(void)setOutputFileType:(NSString *)arg1 ;
-(void)exportAsynchronouslyWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSError *)error;
-(void)setAudioMix:(id)arg1 ;
-(id)videoComposition;
-(SCD_Struct_AV3)timeRange;
-(void)setTimeRange:(SCD_Struct_AV3)arg1 ;
-(void)finalize;
-(void)_updateProgress;
@end

