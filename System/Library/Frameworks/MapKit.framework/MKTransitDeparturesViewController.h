/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKTableViewController.h>
#import <MapKit/MKTransitDeparturesDataSourceHosting.h>
#import <MapKit/MKStackingViewControllerPreferredSizeUse.h>
#import <MapKit/MKModuleViewControllerProtocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate.h>

@protocol MKTransitDepaturesViewControllerDelegate;
@class MKMapItem, MKTransitDeparturesDataSource, NSString;

@interface MKTransitDeparturesViewController : _MKTableViewController <MKTransitDeparturesDataSourceHosting, MKStackingViewControllerPreferredSizeUse, MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate> {

	BOOL _allowTransitLineSelection;
	CGRect _lastMaxWidthBounds;
	BOOL _isInSiri;
	MKMapItem* _mapItem;
	id<MKTransitDepaturesViewControllerDelegate> _delegate;
	MKTransitDeparturesDataSource* _dataSource;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                                       //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) MKTransitDeparturesDataSource * dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) BOOL isInSiri;                                                           //@synthesize isInSiri=_isInSiri - In the implementation block
@property (assign,nonatomic,__weak) id<MKTransitDepaturesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL requiresPreferredContentSizeInStackingView; 
-(id<MKTransitDepaturesViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MKTransitDepaturesViewControllerDelegate>)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(MKTransitDeparturesDataSource *)dataSource;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)infoCardThemeChanged;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(BOOL)requiresPreferredContentSizeInStackingView;
-(BOOL)isInSiri;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)_isCompressedWidthTraits:(id)arg1 ;
-(int)currentTransitCategory;
-(id)traitsForTransitDeparturesDataSource:(id)arg1 ;
-(void)transitDeparturesDataSourceDidReload:(id)arg1 ;
-(UIEdgeInsets)separatorInsetsForTransitDeparturesDataSource:(id)arg1 ;
-(id)separatorColorForTransitDeparturesDataSource:(id)arg1 ;
-(void)transitDeparturesDataSource:(id)arg1 didSelectConnectionInformation:(id)arg2 ;
-(void)transitDeparturesDataSource:(id)arg1 showIncidents:(id)arg2 ;
-(void)transitDeparturesDataSource:(id)arg1 didSelectTransitLine:(id)arg2 fromCell:(id)arg3 ;
-(void)transitDeparturesDataSource:(id)arg1 didSelectDepartureSequence:(id)arg2 transitStationMapItem:(id)arg3 transitLine:(id)arg4 fromCell:(id)arg5 ;
-(BOOL)transitDeparturesDataSource:(id)arg1 canSelectDepartureSequence:(id)arg2 transitStationMapItem:(id)arg3 transitLine:(id)arg4 fromCell:(id)arg5 ;
-(id)initWithMapItem:(id)arg1 allowTransitLineSelection:(BOOL)arg2 ;
@end

