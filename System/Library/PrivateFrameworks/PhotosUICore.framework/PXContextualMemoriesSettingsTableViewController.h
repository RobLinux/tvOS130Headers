/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <PhotosUICore/MKMapViewDelegate.h>
#import <PhotosUICore/CNContactPickerDelegate.h>

@class PXContextualMemoriesSettings, UIView, NSString;

@interface PXContextualMemoriesSettingsTableViewController : UITableViewController <MKMapViewDelegate, CNContactPickerDelegate> {

	BOOL _showsDatePicker;
	BOOL _showsLocationPicker;
	PXContextualMemoriesSettings* _settings;
	UIView* _progressIndicatorView;

}

@property (nonatomic,retain) PXContextualMemoriesSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) BOOL showsDatePicker;                                 //@synthesize showsDatePicker=_showsDatePicker - In the implementation block
@property (assign,nonatomic) BOOL showsLocationPicker;                             //@synthesize showsLocationPicker=_showsLocationPicker - In the implementation block
@property (nonatomic,retain) UIView * progressIndicatorView;                       //@synthesize progressIndicatorView=_progressIndicatorView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)title;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(PXContextualMemoriesSettings *)settings;
-(void)setSettings:(PXContextualMemoriesSettings *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)contactPicker:(id)arg1 didSelectContacts:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)_installProgressIndicatorView;
-(void)_tableView:(id)arg1 selectionDidUpdateForRowAtIndexPath:(id)arg2 ;
-(void)_updateDatePickerHidden;
-(void)_updateLocationPickerHidden;
-(long long)_sectionForSettingOfClass:(Class)arg1 ;
-(void)_reloadRowAndRestoreSelectionIfNeededAtIndexPath:(id)arg1 ;
-(long long)_sectionForDate;
-(long long)_sectionForLocation;
-(long long)_sectionForPeople;
-(id)_indexPathForDateValue;
-(id)_indexPathForLocationValue;
-(id)_indexPathForPeopleValue;
-(id)_indexPathForDatePicker;
-(id)_indexPathForLocationPicker;
-(BOOL)_isDatePickerCellAtIndexPath:(id)arg1 ;
-(BOOL)_isLocationPickerCellAtIndexPath:(id)arg1 ;
-(BOOL)_isPeopleValueCellAtIndexPath:(id)arg1 ;
-(SCD_Struct_PX67)_regionForLocationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)_didChangeDatePicker:(id)arg1 ;
-(void)_handleLongPress:(id)arg1 ;
-(void)_didPressResetAll:(id)arg1 ;
-(void)_showContactsPicker;
-(BOOL)showsDatePicker;
-(void)setShowsDatePicker:(BOOL)arg1 ;
-(BOOL)showsLocationPicker;
-(void)setShowsLocationPicker:(BOOL)arg1 ;
-(UIView *)progressIndicatorView;
-(void)setProgressIndicatorView:(UIView *)arg1 ;
@end

