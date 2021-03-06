/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:23 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TSKViewController.h>
#import <TVSettings/TVSettingsScreenSaverRadioSettingGroupDelegate.h>

@class NSString;

@interface TVSettingsScreenSaverTypesViewController : TSKViewController <TVSettingsScreenSaverRadioSettingGroupDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)title;
-(id)initWithStyle:(long long)arg1 ;
-(id)loadSettingGroups;
-(void)radioSettingsGroup:(id)arg1 didSelectItem:(id)arg2 ;
-(id)_photoCollectionGroupTitleFormatter;
-(id)_childViewControllerForPhotoCollectionGroup:(id)arg1 ;
@end

