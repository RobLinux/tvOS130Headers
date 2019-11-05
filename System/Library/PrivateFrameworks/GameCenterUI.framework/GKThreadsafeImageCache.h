/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKThreadsafeCache.h>
#import <GameCenterUI/GKScreenConfigurationListener.h>

@class NSString;

@interface GKThreadsafeImageCache : GKThreadsafeCache <GKScreenConfigurationListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applicationDidEnterBackground:(id)arg1 ;
-(id)initWithName:(id)arg1 maxCount:(unsigned long long)arg2 ;
-(void)greatestScreenScaleDidChange:(double)arg1 ;
@end
