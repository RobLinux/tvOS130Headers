/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableSet;

@interface _TVRCMediaRemoteCommandParser : NSObject {

	NSArray* _allCommands;
	NSMutableSet* _enabledCommandNames;

}
-(void)_gatherEnabledCommands;
-(BOOL)_containsAnySkipCommands;
-(id)_skipButtons;
-(BOOL)_containsAnyTrackCommands;
-(id)_trackAndSpeedButtons;
-(BOOL)_containsEnabledCommand:(unsigned)arg1 ;
-(id)buttonsForCommands:(id)arg1 ;
@end

