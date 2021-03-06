/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CSVoiceTriggerAssetChangeDelegate;
@class NSObject;

@interface CSVoiceTriggerAssetChangeMonitor : NSObject {

	int _notifyToken;
	NSObject*<OS_dispatch_queue> _queue;
	id<CSVoiceTriggerAssetChangeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSVoiceTriggerAssetChangeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedMonitor;
-(id)init;
-(id<CSVoiceTriggerAssetChangeDelegate>)delegate;
-(void)setDelegate:(id<CSVoiceTriggerAssetChangeDelegate>)arg1 ;
-(void)startMonitoring;
-(void)notifyVoiceTriggerAssetChanged;
@end

