/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVOptionDialogListDataSource.h>

@class TVLMenuElement;

@interface TVLMenuListDataSource : TVOptionDialogListDataSource {

	TVLMenuElement* _menuElement;

}
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithMenuItems:(id)arg1 listView:(id)arg2 ;
-(void)_registerTableViewCellsForListView:(id)arg1 ;
-(Class)_cellClassForMenuItemType:(id)arg1 ;
-(id)_reuseIdentifierForMenuItemType:(id)arg1 ;
-(id)menuItemAtIndexPath:(id)arg1 ;
-(id)initWithMenuElement:(id)arg1 listView:(id)arg2 ;
@end
