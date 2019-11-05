/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSArray;

@interface MPInsertIntoPlaybackQueueCommand : MPRemoteCommand {

	NSMutableSet* _registeredQueueTypes;
	NSMutableSet* _registeredCustomQueueIdentifiers;
	BOOL _supportsSharedQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSArray* _supportedInsertionPositions;

}

@property (nonatomic,copy) NSArray * supportedInsertionPositions;              //@synthesize supportedInsertionPositions=_supportedInsertionPositions - In the implementation block
-(NSArray *)supportedInsertionPositions;
-(void)setSupportedInsertionPositions:(NSArray *)arg1 ;
-(id)initWithMediaRemoteCommandType:(unsigned)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
-(void)registerSupportedQueueType:(long long)arg1 ;
-(void)unregisterSupportedQueueType:(long long)arg1 ;
-(void)registerSupportedCustomQueueIdentifier:(id)arg1 ;
-(void)unregisterSupportedCustomQueueIdentifier:(id)arg1 ;
-(void)setSupportedSharedQueue:(BOOL)arg1 ;
@end

