/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKSetupFlowControllerProtocol.h>
#import <PassKitUI/PKPaymentServiceDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate, OS_dispatch_queue, PKSetupFlowControllerProtocol;
@class PKPaymentWebService, NSMutableArray, PKPaymentService, NSArray, NSMutableSet, PKAccount, NSObject, NSString, PKAssertion, PKFeatureApplication, PKPaymentProvisioningController;

@interface PKApplyController : NSObject <PKSetupFlowControllerProtocol, PKPaymentServiceDelegate> {

	PKPaymentWebService* _webService;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	NSMutableArray* _viewControllers;
	unsigned long long _viewControllerIndex;
	PKPaymentService* _paymentService;
	NSArray* _encryptionCertificates;
	NSMutableSet* _shownTermsIdentifiers;
	NSMutableSet* _processedTermsIdentifiers;
	PKAccount* _account;
	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _endedApplyFlow;
	NSString* _coreIDVNextStepToken;
	NSString* _previousContextIdentifier;
	PKAssertion* _notificationSupressionAssertion;
	unsigned long long _runningApplicationUpdates;
	unsigned long long _featureIdentifier;
	PKFeatureApplication* _featureApplication;
	long long _context;
	PKPaymentProvisioningController* _provisioningController;
	id<PKSetupFlowControllerProtocol> _parentFlowController;

}

@property (nonatomic,readonly) unsigned long long featureIdentifier;                                  //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (nonatomic,readonly) PKFeatureApplication * featureApplication;                             //@synthesize featureApplication=_featureApplication - In the implementation block
@property (nonatomic,readonly) long long context;                                                     //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) PKPaymentProvisioningController * provisioningController;              //@synthesize provisioningController=_provisioningController - In the implementation block
@property (nonatomic,retain) id<PKSetupFlowControllerProtocol> parentFlowController;                  //@synthesize parentFlowController=_parentFlowController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)context;
-(void)_reset;
-(unsigned long long)featureIdentifier;
-(PKPaymentProvisioningController *)provisioningController;
-(void)featureApplicationChanged:(id)arg1 ;
-(PKFeatureApplication *)featureApplication;
-(void)_invalidateAssertion;
-(void)nextViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)setParentFlowController:(id<PKSetupFlowControllerProtocol>)arg1 ;
-(void)submitActionIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)applyFlowDidAppear;
-(id)applicationUpdatedAlertControllerWithHandler:(/*^block*/id)arg1 ;
-(void)endApplyFlow;
-(void)withdrawApplicationWithCompletion:(/*^block*/id)arg1 ;
-(void)submitFieldsPage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<PKSetupFlowControllerProtocol>)parentFlowController;
-(id)initWithFeature:(unsigned long long)arg1 setupDelegate:(id)arg2 context:(long long)arg3 provisioningController:(id)arg4 ;
-(void)_acquireAssertion;
-(id)_nextQueuedViewController;
-(void)_startPaymentServiceListener;
-(void)_stopPaymentServiceListener;
-(void)_performApplyWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performCreateWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleResponseError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleApplyResponse:(id)arg1 originalFeatureApplication:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_deviceMetadataFields:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performWithdrawWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidateIDVSession;
-(id)_displayableErrorForError:(id)arg1 showDetailedErrorFlow:(BOOL)arg2 ;
-(void)_queueStateReasonExplanationFlowWithPage:(id)arg1 ;
-(void)_queueGenericErrorViewController;
-(void)_queueFieldsFlowWithNextStepInfo:(id)arg1 ;
-(void)_startCoreIDVSessionWithStepInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queueApplicationTermsFlow;
-(void)_queueActionFlowWithPage:(id)arg1 ;
-(void)_queueInfoFlowWithNextWithPage:(id)arg1 ;
-(void)_queueOfferFlowWithPage:(id)arg1 ;
-(void)_queueDeclinedFlowWithPage:(id)arg1 ;
-(void)_queueAcceptedFlowWithPage:(id)arg1 ;
-(void)_queuePassActiviationFlowWithCompletion:(/*^block*/id)arg1 ;
-(void)_queueExpiredFlowWithPage:(id)arg1 ;
-(void)_queueTerminalStateFlowWithPage:(id)arg1 ;
-(id)_fieldsViewControllerForPage:(id)arg1 ;
-(void)_queueGenericErrorViewControllerWithPage:(id)arg1 ;
-(void)_queueEmailRequiredErrorViewController;
-(id)initWithFeatureApplication:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 provisioningController:(id)arg4 ;
-(void)submitDocumentPage:(id)arg1 selectedDocument:(id)arg2 frontImage:(id)arg3 backImage:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)termsShownWithIdentifier:(id)arg1 ;
-(void)termsAccepted:(BOOL)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)termsDataForIdentifier:(id)arg1 format:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)termsDataForFeatureWithIdentifier:(id)arg1 format:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queueCannotResumeIDVFlow;
@end

