/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FigVideoCaptureConnectionConfiguration, FigAudioCaptureConnectionConfiguration, FigMetadataItemCaptureConnectionConfiguration, NSArray;

@interface FigCaptureSessionParsedMovieFileSinkConfiguration : NSObject {

	FigVideoCaptureConnectionConfiguration* _videoConnectionConfiguration;
	FigAudioCaptureConnectionConfiguration* _audioConnectionConfiguration;
	FigMetadataItemCaptureConnectionConfiguration* _cameraDebugInfoMetadataConnectionConfiguration;
	NSArray* _detectedObjectMetadataConnectionConfigurations;
	FigVideoCaptureConnectionConfiguration* _stillImageConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _sceneClassifierConnectionConfiguration;

}

@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * videoConnectionConfiguration;                                       //@synthesize videoConnectionConfiguration=_videoConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigAudioCaptureConnectionConfiguration * audioConnectionConfiguration;                                       //@synthesize audioConnectionConfiguration=_audioConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigMetadataItemCaptureConnectionConfiguration * cameraDebugInfoMetadataConnectionConfiguration;              //@synthesize cameraDebugInfoMetadataConnectionConfiguration=_cameraDebugInfoMetadataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * detectedObjectMetadataConnectionConfigurations;                                                    //@synthesize detectedObjectMetadataConnectionConfigurations=_detectedObjectMetadataConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * stillImageConnectionConfiguration;                                  //@synthesize stillImageConnectionConfiguration=_stillImageConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * sceneClassifierConnectionConfiguration;                             //@synthesize sceneClassifierConnectionConfiguration=_sceneClassifierConnectionConfiguration - In the implementation block
-(void)dealloc;
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)sceneClassifierConnectionConfiguration;
-(id)initWithCaptureConnectionConfigurations:(id)arg1 stillImageConnectionConfiguration:(id)arg2 sceneClassifierConnectionConfigurationsBySourceID:(id)arg3 ;
-(id)initWithVideoConnectionConfiguration:(id)arg1 audioConnectionConfiguration:(id)arg2 cameraDebugInfoMetadataConnectionConfiguration:(id)arg3 detectedObjectMetadataConnectionConfigurations:(id)arg4 stillImageConnectionConfiguration:(id)arg5 sceneClassifierConnectionConfiguration:(id)arg6 ;
-(FigVideoCaptureConnectionConfiguration *)videoConnectionConfiguration;
-(FigAudioCaptureConnectionConfiguration *)audioConnectionConfiguration;
-(FigMetadataItemCaptureConnectionConfiguration *)cameraDebugInfoMetadataConnectionConfiguration;
-(NSArray *)detectedObjectMetadataConnectionConfigurations;
@end
