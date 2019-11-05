/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <UIKitServices/BSXPCCoding.h>
#import <UIKitServices/NSCopying.h>

@class UISApplicationSupportDisplayEdgeInsetsWrapper, NSNumber, NSString;

@interface UISApplicationSupportDisplayEdgeInfo : NSObject <BSXPCCoding, NSCopying> {

	SCD_Union_UI2 _infoFlags;
	UISApplicationSupportDisplayEdgeInsetsWrapper* _peripheryInsets;
	NSNumber* _systemMinimumMargin;
	NSNumber* _homeAffordanceOverlayAllowance;
	UISApplicationSupportDisplayEdgeInsetsWrapper* _safeAreaInsetsPortrait;
	UISApplicationSupportDisplayEdgeInsetsWrapper* _safeAreaInsetsLandscapeLeft;
	UISApplicationSupportDisplayEdgeInsetsWrapper* _safeAreaInsetsPortraitUpsideDown;
	UISApplicationSupportDisplayEdgeInsetsWrapper* _safeAreaInsetsLandscapeRight;

}

@property (nonatomic,retain) UISApplicationSupportDisplayEdgeInsetsWrapper * peripheryInsets;                               //@synthesize peripheryInsets=_peripheryInsets - In the implementation block
@property (nonatomic,retain) NSNumber * systemMinimumMargin;                                                                //@synthesize systemMinimumMargin=_systemMinimumMargin - In the implementation block
@property (nonatomic,retain) NSNumber * homeAffordanceOverlayAllowance;                                                     //@synthesize homeAffordanceOverlayAllowance=_homeAffordanceOverlayAllowance - In the implementation block
@property (nonatomic,retain) UISApplicationSupportDisplayEdgeInsetsWrapper * safeAreaInsetsPortrait;                        //@synthesize safeAreaInsetsPortrait=_safeAreaInsetsPortrait - In the implementation block
@property (nonatomic,retain) UISApplicationSupportDisplayEdgeInsetsWrapper * safeAreaInsetsLandscapeLeft;                   //@synthesize safeAreaInsetsLandscapeLeft=_safeAreaInsetsLandscapeLeft - In the implementation block
@property (nonatomic,retain) UISApplicationSupportDisplayEdgeInsetsWrapper * safeAreaInsetsPortraitUpsideDown;              //@synthesize safeAreaInsetsPortraitUpsideDown=_safeAreaInsetsPortraitUpsideDown - In the implementation block
@property (nonatomic,retain) UISApplicationSupportDisplayEdgeInsetsWrapper * safeAreaInsetsLandscapeRight;                  //@synthesize safeAreaInsetsLandscapeRight=_safeAreaInsetsLandscapeRight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultDisplayEdgeInfoForceInsets:(BOOL)arg1 ;
+(id)defaultDisplayEdgeInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSNumber *)homeAffordanceOverlayAllowance;
-(UISApplicationSupportDisplayEdgeInsetsWrapper *)safeAreaInsetsPortrait;
-(UISApplicationSupportDisplayEdgeInsetsWrapper *)safeAreaInsetsLandscapeLeft;
-(UISApplicationSupportDisplayEdgeInsetsWrapper *)safeAreaInsetsLandscapeRight;
-(UISApplicationSupportDisplayEdgeInsetsWrapper *)safeAreaInsetsPortraitUpsideDown;
-(UISApplicationSupportDisplayEdgeInsetsWrapper *)peripheryInsets;
-(NSNumber *)systemMinimumMargin;
-(void)setPeripheryInsets:(UISApplicationSupportDisplayEdgeInsetsWrapper *)arg1 ;
-(void)setSystemMinimumMargin:(NSNumber *)arg1 ;
-(void)setSafeAreaInsetsPortrait:(UISApplicationSupportDisplayEdgeInsetsWrapper *)arg1 ;
-(void)setHomeAffordanceOverlayAllowance:(NSNumber *)arg1 ;
-(void)setSafeAreaInsetsLandscapeLeft:(UISApplicationSupportDisplayEdgeInsetsWrapper *)arg1 ;
-(void)setSafeAreaInsetsPortraitUpsideDown:(UISApplicationSupportDisplayEdgeInsetsWrapper *)arg1 ;
-(void)setSafeAreaInsetsLandscapeRight:(UISApplicationSupportDisplayEdgeInsetsWrapper *)arg1 ;
-(void)_performIvarUpdateIfAllowed:(/*^block*/id)arg1 ;
-(void)_copyFromOtherInfo:(id)arg1 ;
@end

