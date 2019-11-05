/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKPaymentPass, PKRemotePaymentInstrument, PKPaymentApplication, NSString;

@interface PKPaymentPreferenceCardEntry : NSObject {

	BOOL _shouldShowCardUI;
	BOOL _isSelectable;
	PKPaymentPass* _pass;
	PKRemotePaymentInstrument* _remotePaymentInstrument;
	PKPaymentApplication* _paymentApplication;
	NSString* _displayName;
	NSString* _availabilityString;
	/*^block*/id _actionBlock;

}

@property (nonatomic,retain) PKPaymentPass * pass;                                             //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKRemotePaymentInstrument * remotePaymentInstrument;              //@synthesize remotePaymentInstrument=_remotePaymentInstrument - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * paymentApplication;                        //@synthesize paymentApplication=_paymentApplication - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                             //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * availabilityString;                                      //@synthesize availabilityString=_availabilityString - In the implementation block
@property (assign,nonatomic) BOOL shouldShowCardUI;                                            //@synthesize shouldShowCardUI=_shouldShowCardUI - In the implementation block
@property (assign,nonatomic) BOOL isSelectable;                                                //@synthesize isSelectable=_isSelectable - In the implementation block
@property (nonatomic,copy) id actionBlock;                                                     //@synthesize actionBlock=_actionBlock - In the implementation block
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(PKPaymentPass *)pass;
-(BOOL)isSelectable;
-(void)setActionBlock:(id)arg1 ;
-(id)actionBlock;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(PKPaymentApplication *)paymentApplication;
-(void)setPaymentApplication:(PKPaymentApplication *)arg1 ;
-(void)setRemotePaymentInstrument:(PKRemotePaymentInstrument *)arg1 ;
-(PKRemotePaymentInstrument *)remotePaymentInstrument;
-(NSString *)availabilityString;
-(void)setAvailabilityString:(NSString *)arg1 ;
-(BOOL)shouldShowCardUI;
-(void)setShouldShowCardUI:(BOOL)arg1 ;
-(void)setIsSelectable:(BOOL)arg1 ;
@end

