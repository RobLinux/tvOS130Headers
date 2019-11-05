/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ShareSheet/UIActivity.h>

@class NSString, UISUIActivityConfiguration, NSUUID;

@interface SUIHostActivityProxy : UIActivity {

	BOOL _activitySupportsPromiseURLs;
	BOOL _appIsDocumentTypeOwner;
	NSString* _activityTitle;
	NSString* _activityType;
	UISUIActivityConfiguration* _activityConfiguration;
	NSUUID* _hostActivityUUID;
	NSString* _fallbackActivityType;
	NSString* _positionBeforeActivityType;
	long long _defaultSortGroup;
	CGSize _preferredThumbnailSize;

}

@property (nonatomic,retain) UISUIActivityConfiguration * activityConfiguration;              //@synthesize activityConfiguration=_activityConfiguration - In the implementation block
@property (nonatomic,retain) NSUUID * hostActivityUUID;                                       //@synthesize hostActivityUUID=_hostActivityUUID - In the implementation block
@property (nonatomic,retain) NSString * activityTitle;                                        //@synthesize activityTitle=_activityTitle - In the implementation block
@property (nonatomic,retain) NSString * activityType;                                         //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,retain) NSString * fallbackActivityType;                                 //@synthesize fallbackActivityType=_fallbackActivityType - In the implementation block
@property (assign,nonatomic) CGSize preferredThumbnailSize;                                   //@synthesize preferredThumbnailSize=_preferredThumbnailSize - In the implementation block
@property (nonatomic,retain) NSString * positionBeforeActivityType;                           //@synthesize positionBeforeActivityType=_positionBeforeActivityType - In the implementation block
@property (assign,nonatomic) BOOL activitySupportsPromiseURLs;                                //@synthesize activitySupportsPromiseURLs=_activitySupportsPromiseURLs - In the implementation block
@property (assign,nonatomic) long long defaultSortGroup;                                      //@synthesize defaultSortGroup=_defaultSortGroup - In the implementation block
@property (assign,nonatomic) BOOL appIsDocumentTypeOwner;                                     //@synthesize appIsDocumentTypeOwner=_appIsDocumentTypeOwner - In the implementation block
@property (nonatomic,readonly) NSUUID * activityUUID; 
+(id)activitiesForConfigurations:(id)arg1 ;
+(id)newWithActivityConfiguration:(id)arg1 ;
+(Class)activityProxyClassForActivityCategory:(long long)arg1 ;
-(id)debugDescription;
-(NSString *)activityType;
-(void)setActivityType:(NSString *)arg1 ;
-(NSUUID *)activityUUID;
-(CGSize)_thumbnailSize;
-(void)setActivityTitle:(NSString *)arg1 ;
-(NSString *)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)activityDidFinish:(BOOL)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(long long)_defaultSortGroup;
-(id)_activityTypeUsingFallbackActivityTypeIfNecessary;
-(BOOL)_appIsDocumentTypeOwner;
-(BOOL)_activitySupportsPromiseURLs;
-(id)_beforeActivity;
-(BOOL)activitySupportsPromiseURLs;
-(void)setActivitySupportsPromiseURLs:(BOOL)arg1 ;
-(BOOL)appIsDocumentTypeOwner;
-(NSString *)fallbackActivityType;
-(NSString *)positionBeforeActivityType;
-(long long)defaultSortGroup;
-(CGSize)preferredThumbnailSize;
-(id)initWithAttributesFromActivityConfiguration:(id)arg1 ;
-(UISUIActivityConfiguration *)activityConfiguration;
-(void)setActivityConfiguration:(UISUIActivityConfiguration *)arg1 ;
-(NSUUID *)hostActivityUUID;
-(void)setHostActivityUUID:(NSUUID *)arg1 ;
-(void)setFallbackActivityType:(NSString *)arg1 ;
-(void)setPreferredThumbnailSize:(CGSize)arg1 ;
-(void)setPositionBeforeActivityType:(NSString *)arg1 ;
-(void)setDefaultSortGroup:(long long)arg1 ;
-(void)setAppIsDocumentTypeOwner:(BOOL)arg1 ;
@end
