/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface PSListItemsController : PSListController {

	long long _rowToSelect;
	BOOL _deferItemSelection;
	BOOL _restrictionList;
	PSSpecifier* _lastSelectedSpecifier;
	id _retainedTarget;

}
-(void)suspend;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)specifiers;
-(void)didLock;
-(void)prepareSpecifiersMetadata;
-(void)scrollToSelectedCell;
-(void)setValueForSpecifier:(id)arg1 defaultValue:(id)arg2 ;
-(void)setRowToSelect;
-(void)listItemSelected:(id)arg1 ;
-(void)_addStaticText:(id)arg1 ;
-(id)itemsFromParent;
-(id)itemsFromDataSource;
-(BOOL)isRestrictionList;
-(void)setIsRestrictionList:(BOOL)arg1 ;
@end

