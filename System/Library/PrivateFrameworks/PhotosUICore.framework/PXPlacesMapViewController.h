/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <PhotosUICore/PXChangeObserver.h>
#import <PhotosUICore/PXPlacesMapControllerAccess.h>

@class PXPlacesMapController, PKExtendedTraitCollection, NSString;

@interface PXPlacesMapViewController : UIViewController <PXChangeObserver, PXPlacesMapControllerAccess> {

	PXPlacesMapController* _mapController;

}

@property (nonatomic,retain) PXPlacesMapController * mapController;                                 //@synthesize mapController=_mapController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PKExtendedTraitCollection * pk_extendedTraitCollection; 
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXPlacesMapController *)mapController;
-(PKExtendedTraitCollection *)pk_extendedTraitCollection;
-(void)sendTraitNotification;
-(void)setMapController:(PXPlacesMapController *)arg1 ;
@end

