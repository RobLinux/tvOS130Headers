/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <PassKitUI/MKMapViewDelegate.h>

@class MKMapView, PKPaymentTransaction, NSString;

@interface PKTransactionMapView : UIView <MKMapViewDelegate> {

	MKMapView* _internalMapView;
	CGRect _lastLaidBounds;
	BOOL _showsMerchantName;
	BOOL _usesDarkAppearance;
	PKPaymentTransaction* _transaction;

}

@property (assign,nonatomic) BOOL showsMerchantName;                          //@synthesize showsMerchantName=_showsMerchantName - In the implementation block
@property (nonatomic,retain) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) BOOL usesDarkAppearance;                         //@synthesize usesDarkAppearance=_usesDarkAppearance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPaymentTransaction *)transaction;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(void)layoutSubviews;
-(void)setUsesDarkAppearance:(BOOL)arg1 ;
-(void)setShowsMerchantName:(BOOL)arg1 ;
-(void)_centerOnTransactionAnimated:(BOOL)arg1 ;
-(id)_annotationsForTransaction:(id)arg1 ;
-(SCD_Struct_PK8)_mapRectForTransaction:(id)arg1 ;
-(BOOL)showsMerchantName;
-(BOOL)usesDarkAppearance;
@end

