/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PLDataArrayInputStreamProgressDelegate.h>

@class NSString, NSData, NSMutableArray, PLVideoRemaker;

@interface PLPublishingAgent : NSObject <PLDataArrayInputStreamProgressDelegate> {

	id _userInfo;
	id _delegate;
	NSString* _mediaPath;
	NSData* _mediaData;
	NSString* _mimeType;
	BOOL _deleteAfterPublishing;
	double _changeRate;
	long long _currentValue;
	double _estimatedTimeRemaining;
	long long _maxValue;
	long long _normalizedCurrentValue;
	long long _normalizedMaxValue;
	float _percentComplete;
	float _remakingPercentComplete;
	float _progressMultiplier;
	NSMutableArray* _snapshotTimes;
	NSMutableArray* _snapshotValues;
	BOOL _ownerIsCamera;
	BOOL _needsRemaking;
	double _startTime;
	double _endTime;
	long long _approximateHDUploadSize;
	long long _approximateSDUploadSize;
	BOOL _mediaIsHDVideo;
	BOOL _enableHDUpload;
	BOOL _needsTrimming;
	BOOL _allowsHDOver3GUpload;
	int _selectedOption;
	PLVideoRemaker* _remaker;
	int _remakerMode;
	SEL _completionSelector;
	unsigned _remakingWasCancelled : 1;
	unsigned _remaking : 1;
	unsigned _publishing : 1;
	BOOL _shouldCancelPublish;

}

@property (assign,nonatomic) id<PLPublishingAgentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL ownerIsCamera;                                  //@synthesize ownerIsCamera=_ownerIsCamera - In the implementation block
@property (assign,nonatomic) long long approximateHDUploadSize;                   //@synthesize approximateHDUploadSize=_approximateHDUploadSize - In the implementation block
@property (assign,nonatomic) long long approximateSDUploadSize;                   //@synthesize approximateSDUploadSize=_approximateSDUploadSize - In the implementation block
@property (assign,nonatomic) BOOL mediaIsHDVideo;                                 //@synthesize mediaIsHDVideo=_mediaIsHDVideo - In the implementation block
@property (assign,nonatomic) BOOL enableHDUpload;                                 //@synthesize enableHDUpload=_enableHDUpload - In the implementation block
@property (assign,nonatomic) BOOL needsTrimming;                                  //@synthesize needsTrimming=_needsTrimming - In the implementation block
@property (assign,nonatomic) int remakerMode;                                     //@synthesize remakerMode=_remakerMode - In the implementation block
@property (assign,nonatomic) int selectedOption;                                  //@synthesize selectedOption=_selectedOption - In the implementation block
@property (assign,nonatomic) float progressMultiplier;                            //@synthesize progressMultiplier=_progressMultiplier - In the implementation block
@property (assign,nonatomic) BOOL allowsHDOver3GUpload;                           //@synthesize allowsHDOver3GUpload=_allowsHDOver3GUpload - In the implementation block
@property (assign,nonatomic) BOOL shouldCancelPublish;                            //@synthesize shouldCancelPublish=_shouldCancelPublish - In the implementation block
@property (nonatomic,readonly) BOOL allowsCellularAccessForRequests; 
+(BOOL)canUploadHDVideoOverCellular;
+(id)publishingAgentForBundleNamed:(id)arg1 toPublishMedia:(id)arg2 ;
-(void)dealloc;
-(id)userInfo;
-(id<PLPublishingAgentDelegate>)delegate;
-(void)setDelegate:(id<PLPublishingAgentDelegate>)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(void)publish;
-(id)serviceName;
-(double)estimatedTimeRemaining;
-(void)dismiss;
-(float)percentComplete;
-(void)snapshot;
-(void)_updateStatisticsFromSnapshots;
-(id)tellAFriendBody;
-(id)tellAFriendSubject;
-(id)mediaURL;
-(void)cancelRemaking;
-(void)_networkReachabilityDidChange:(id)arg1 ;
-(id)mediaData;
-(void)setMediaData:(id)arg1 ;
-(id)navigationController;
-(void)dataArrayInputStreamBytesWereRead:(id)arg1 ;
-(BOOL)allowsCellularAccessForRequests;
-(void)_startNetworkObservation;
-(void)_stopNetworkObservation;
-(id)initWithMedia:(id)arg1 ;
-(void)_setUpPublishingParams;
-(id)mediaPath;
-(void)setMediaPath:(id)arg1 ;
-(void)setDeleteMediaFileAfterPublishing:(BOOL)arg1 ;
-(BOOL)deleteMediaFileAfterPublishing;
-(BOOL)isPublishing;
-(void)setPublishing:(BOOL)arg1 ;
-(void)setRemakerMode:(int)arg1 ;
-(void)setTrimStartTime:(double)arg1 andEndTime:(double)arg2 ;
-(void)_setApproximateVideoUploadSizes;
-(void)resignPublishingSheetResponders;
-(void)cancelButtonClicked;
-(void)doneButtonClicked;
-(void)_agentIsReadyToPublish:(id)arg1 ;
-(void)presentModalSheetInViewController:(id)arg1 ;
-(void)willDismiss;
-(id)mediaTitle;
-(BOOL)isVideoMedia;
-(id)tellAFriendURL;
-(BOOL)allowsTellingFriend;
-(BOOL)allowsViewingOnHost;
-(double)maximumVideoDuration;
-(void)setTotalBytesWritten:(long long)arg1 totalBytes:(long long)arg2 ;
-(float)remakingPercentComplete;
-(BOOL)isRemaking;
-(void)_cancelRemaking:(id)arg1 ;
-(void)_transcodeVideo:(id)arg1 ;
-(void)videoRemakerDidBeginRemaking:(id)arg1 ;
-(void)_remakerDidFinish:(id)arg1 ;
-(void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2 ;
-(void)videoRemaker:(id)arg1 progressDidChange:(float)arg2 ;
-(id)progressViewMessageDuringRemake;
-(int)_remakerModeForSelectedOption;
-(void)showAlertWithError:(id)arg1 ;
-(BOOL)ownerIsCamera;
-(void)setOwnerIsCamera:(BOOL)arg1 ;
-(long long)approximateHDUploadSize;
-(void)setApproximateHDUploadSize:(long long)arg1 ;
-(long long)approximateSDUploadSize;
-(void)setApproximateSDUploadSize:(long long)arg1 ;
-(BOOL)mediaIsHDVideo;
-(void)setMediaIsHDVideo:(BOOL)arg1 ;
-(BOOL)enableHDUpload;
-(void)setEnableHDUpload:(BOOL)arg1 ;
-(BOOL)needsTrimming;
-(void)setNeedsTrimming:(BOOL)arg1 ;
-(int)remakerMode;
-(int)selectedOption;
-(void)setSelectedOption:(int)arg1 ;
-(float)progressMultiplier;
-(void)setProgressMultiplier:(float)arg1 ;
-(BOOL)allowsHDOver3GUpload;
-(void)setAllowsHDOver3GUpload:(BOOL)arg1 ;
-(BOOL)shouldCancelPublish;
-(void)setShouldCancelPublish:(BOOL)arg1 ;
@end

