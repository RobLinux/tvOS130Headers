/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMSettingsOwner;
@class HMSettingGroup;

@interface HMSettings : NSObject {

	id<HMSettingsOwner> _owner;

}

@property (__weak,readonly) id<HMSettingsOwner> owner;                     //@synthesize owner=_owner - In the implementation block
@property (readonly) HMSettingGroup * rootGroup; 
@property (getter=isControllable,readonly) BOOL controllable; 
@property (__weak) id<HMSettingsDelegate> delegate; 
-(id<HMSettingsDelegate>)delegate;
-(void)setDelegate:(id<HMSettingsDelegate>)arg1 ;
-(id<HMSettingsOwner>)owner;
-(HMSettingGroup *)rootGroup;
-(id)initWithSettingsOwner:(id)arg1 ;
-(BOOL)isControllable;
@end

