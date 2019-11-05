/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettings/TVSettingsTCCFacade.h>
#import <TVSettings/HMHomeManagerDelegate.h>
#import <TVSettings/HMHomeDelegatePrivate.h>

@class NSArray, HMHomeManager, NSString;

@interface TVSettingsHomeKitFacade : TVSettingsTCCFacade <HMHomeManagerDelegate, HMHomeDelegatePrivate> {

	BOOL _needsUpdate;
	NSArray* _residentDevices;
	HMHomeManager* _homeManager;

}

@property (nonatomic,readonly) HMHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,copy) NSArray * residentDevices;                    //@synthesize residentDevices=_residentDevices - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                           //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)initWithServiceName:(id)arg1 ;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(void)homeManagerDidUpdatePrimaryHome:(id)arg1 ;
-(void)homeManager:(id)arg1 didAddHome:(id)arg2 ;
-(void)homeManager:(id)arg1 didRemoveHome:(id)arg2 ;
-(void)home:(id)arg1 didAddResidentDevice:(id)arg2 ;
-(void)home:(id)arg1 didRemoveResidentDevice:(id)arg2 ;
-(HMHomeManager *)homeManager;
-(NSArray *)residentDevices;
-(void)_updateResidentDevices;
-(void)_setNeedsResidentDeviceUpdate;
-(void)setResidentDevices:(NSArray *)arg1 ;
@end

