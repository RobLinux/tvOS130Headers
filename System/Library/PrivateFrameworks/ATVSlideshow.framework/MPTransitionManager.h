/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MPTransitionManager : NSObject {

	NSMutableDictionary* mTransitions;
	NSMutableDictionary* mTransitionCategories;
	NSMutableDictionary* mTransitionPresets;

}
+(id)sharedManager;
+(void)releaseSharedManager;
+(void)loadTransitionManagerWithPaths:(id)arg1 ;
-(void)dealloc;
-(id)initWithPaths:(id)arg1 ;
-(id)versionOfTransitionID:(id)arg1 ;
-(id)attributesForTransitionID:(id)arg1 andPresetID:(id)arg2 ;
-(double)beatStrengthForTransitionID:(id)arg1 ;
-(double)defaultDurationForTransitionID:(id)arg1 ;
-(id)localizedCategoryNameFromCategoryID:(id)arg1 ;
-(id)allCategoryIDs;
-(long long)transitionNeedsRandomSeedInformation:(id)arg1 ;
-(id)categoryIDsForTransitionID:(id)arg1 ;
-(id)transitionsForCategoryID:(id)arg1 ;
-(id)settingsUIControlDescriptionsForTransition:(id)arg1 ;
-(id)allTransitionIDs;
-(id)descriptionForTransitionID:(id)arg1 ;
-(id)localizedTransitionNameForTransitionID:(id)arg1 ;
-(id)localizedNameForTransitionID:(id)arg1 withLanguage:(id)arg2 ;
-(id)localizedTransitionNameForTransitionID:(id)arg1 andPresetID:(id)arg2 ;
-(id)localizedSettingsUITitleForTitleKey:(id)arg1 inTransition:(id)arg2 ;
-(id)controlForAttribute:(id)arg1 forTransitionID:(id)arg2 ;
-(id)presetsForTransitionID:(id)arg1 ;
-(id)constraintsForTransitionPresetsMatchingList:(id)arg1 andCriteria:(id)arg2 ;
-(id)randomTransitionPresetFromList:(id)arg1 abidingWithConstraints:(id)arg2 ;
-(id)transitionPresetsMatchingCriteria:(id)arg1 ;
-(double)bestBeatTimeForTransitionID:(id)arg1 ;
@end

