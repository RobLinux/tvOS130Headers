/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXGadgetProvider.h>
#import <PhotosUICore/PXNavigationListDataSectionManagerObserver.h>

@class PXExtendedTraitCollection, PXNavigationListDataSectionManager, NSString;

@interface PXNavigationListGadgetProvider : PXGadgetProvider <PXNavigationListDataSectionManagerObserver> {

	BOOL _shouldShowNavigationListOnIpad;
	BOOL _isPresentedInPicker;
	unsigned long long _type;
	PXExtendedTraitCollection* _traitCollection;
	PXNavigationListDataSectionManager* _dataSourceManager;

}

@property (nonatomic,readonly) unsigned long long type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) PXExtendedTraitCollection * traitCollection;                       //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,retain) PXNavigationListDataSectionManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,readonly) BOOL isPresentedInPicker;                                          //@synthesize isPresentedInPicker=_isPresentedInPicker - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowNavigationListForDeviceAndLayoutClass; 
@property (assign,nonatomic) BOOL shouldShowNavigationListOnIpad;                                 //@synthesize shouldShowNavigationListOnIpad=_shouldShowNavigationListOnIpad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(unsigned long long)type;
-(PXExtendedTraitCollection *)traitCollection;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)loadDataForGadgets;
-(void)startLoadingRemainingData;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)generateGadgets;
-(PXNavigationListDataSectionManager *)dataSourceManager;
-(void)setDataSourceManager:(PXNavigationListDataSectionManager *)arg1 ;
-(void)_updateGadgets;
-(id)initWithType:(unsigned long long)arg1 extendedTraitCollection:(id)arg2 isPresentedInPicker:(BOOL)arg3 ;
-(BOOL)shouldShowNavigationListForDeviceAndLayoutClass;
-(void)_initializeDataSourceManagerIfNeeded;
-(BOOL)shouldShowNavigationListOnIpad;
-(void)setShouldShowNavigationListOnIpad:(BOOL)arg1 ;
-(BOOL)isPresentedInPicker;
@end

