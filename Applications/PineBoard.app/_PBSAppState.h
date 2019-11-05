/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:30 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UISApplicationStateServiceDataSource.h>

@class NSDate, FBSApplicationDataStore, NSString, PBSBadgeValue;

@interface _PBSAppState : NSObject <UISApplicationStateServiceDataSource> {

	FBSApplicationDataStore* _store;
	BOOL _isTVSettings;
	BOOL _badgeEnabled;
	BOOL _recentlyUpdated;
	NSString* _bundleIdentifier;
	PBSBadgeValue* _badgeValueWrapper;
	id _badgeValue;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                         //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) PBSBadgeValue * badgeValueWrapper;                   //@synthesize badgeValueWrapper=_badgeValueWrapper - In the implementation block
@property (nonatomic,copy) id badgeValue;                                                //@synthesize badgeValue=_badgeValue - In the implementation block
@property (assign,getter=isBadgeEnabled,nonatomic) BOOL badgeEnabled;                    //@synthesize badgeEnabled=_badgeEnabled - In the implementation block
@property (assign,getter=isRecentlyUpdated,nonatomic) BOOL recentlyUpdated;              //@synthesize recentlyUpdated=_recentlyUpdated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL usesBackgroundNetwork; 
@property (nonatomic,retain) NSDate * nextWakeDate; 
-(void)invalidate;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)badgeValue;
-(void)setBadgeValue:(id)arg1 ;
-(BOOL)isBadgeEnabled;
-(BOOL)isRecentlyUpdated;
-(void)setBadgeEnabled:(BOOL)arg1 ;
-(void)setRecentlyUpdated:(BOOL)arg1 ;
-(PBSBadgeValue *)badgeValueWrapper;
@end

