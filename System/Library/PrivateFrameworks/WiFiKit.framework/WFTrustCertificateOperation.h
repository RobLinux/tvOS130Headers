/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WFOperation.h>
#import <WiFiKit/TrustCertificateViewControllerDelegate.h>

@class NSArray, TrustCertificateViewController, UIViewController, NSString;

@interface WFTrustCertificateOperation : WFOperation <TrustCertificateViewControllerDelegate> {

	BOOL _accepted;
	NSArray* _certificateChain;
	TrustCertificateViewController* _trustVc;
	UIViewController* _rootViewController;

}

@property (nonatomic,retain) TrustCertificateViewController * trustVc;              //@synthesize trustVc=_trustVc - In the implementation block
@property (nonatomic,retain) NSArray * certificateChain;                            //@synthesize certificateChain=_certificateChain - In the implementation block
@property (assign,nonatomic) BOOL accepted;                                         //@synthesize accepted=_accepted - In the implementation block
@property (nonatomic,retain) UIViewController * rootViewController;                 //@synthesize rootViewController=_rootViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(UIViewController *)rootViewController;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(NSArray *)certificateChain;
-(void)trustCertificateViewController:(id)arg1 finishedWithReturnCode:(int)arg2 ;
-(void)setAccepted:(BOOL)arg1 ;
-(void)setCertificateChain:(NSArray *)arg1 ;
-(id)initWithCertificateChain:(id)arg1 rootViewController:(id)arg2 ;
-(BOOL)accepted;
-(void)setTrustVc:(TrustCertificateViewController *)arg1 ;
-(TrustCertificateViewController *)trustVc;
@end

