/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TSKViewController.h>

@class PBSExternalControlSystem, NSArray;

@interface TVSettingsSelectIRConfigurationViewController : TSKViewController {

	PBSExternalControlSystem* _externalControlSystem;
	NSArray* _cachedIRVolumeButtonConfiguration;

}

@property (nonatomic,copy) NSArray * cachedIRVolumeButtonConfiguration;                     //@synthesize cachedIRVolumeButtonConfiguration=_cachedIRVolumeButtonConfiguration - In the implementation block
@property (nonatomic,retain) PBSExternalControlSystem * externalControlSystem;              //@synthesize externalControlSystem=_externalControlSystem - In the implementation block
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(PBSExternalControlSystem *)externalControlSystem;
-(void)setExternalControlSystem:(PBSExternalControlSystem *)arg1 ;
-(id)loadSettingGroups;
-(void)_remotePolicyChanged;
-(void)_externalControlSystemConfigurationChanged;
-(void)_cacheIRVolumeButtonConfigurations;
-(void)_didSelectAutoValue;
-(NSArray *)cachedIRVolumeButtonConfiguration;
-(void)_didSelectConfiguration:(id)arg1 ;
-(void)_didSelectOffValue;
-(void)_didSelectEditConfigurations;
-(void)_didSelectAddConfiguration;
-(void)setCachedIRVolumeButtonConfiguration:(NSArray *)arg1 ;
@end

