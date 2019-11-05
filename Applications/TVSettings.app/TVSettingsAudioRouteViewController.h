/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TSKViewController.h>

@class TVPAudioRoutingController, TVPAudioRoute, NSArray;

@interface TVSettingsAudioRouteViewController : TSKViewController {

	TVPAudioRoutingController* _routingController;
	TVPAudioRoute* _recentlySelectedRoute;
	NSArray* _routes;

}
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(id)initWithStyle:(long long)arg1 ;
-(id)loadSettingGroups;
-(void)_selectRoute:(id)arg1 ;
-(id)_identifierForRoute:(id)arg1 ;
@end

