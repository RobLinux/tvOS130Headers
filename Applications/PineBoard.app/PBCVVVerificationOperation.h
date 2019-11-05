/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:30 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <PineBoard/PBTextEntryViewControllerDelegate.h>

@class NSString, NSURL;

@interface PBCVVVerificationOperation : ISOperation <PBTextEntryViewControllerDelegate> {

	/*^block*/id _completion;
	NSString* _customerTitle;
	NSString* _customerMessage;
	NSURL* _verifyURL;

}

@property (nonatomic,copy) id completion;                             //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSString * customerTitle;                //@synthesize customerTitle=_customerTitle - In the implementation block
@property (nonatomic,retain) NSString * customerMessage;              //@synthesize customerMessage=_customerMessage - In the implementation block
@property (nonatomic,retain) NSURL * verifyURL;                       //@synthesize verifyURL=_verifyURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)run;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setCustomerTitle:(NSString *)arg1 ;
-(void)setCustomerMessage:(NSString *)arg1 ;
-(void)setVerifyURL:(NSURL *)arg1 ;
-(NSString *)customerTitle;
-(NSString *)customerMessage;
-(void)presentFailureAlertWithTitle:(id)arg1 message:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)textEntry:(id)arg1 didSelectButtonAtIndex:(unsigned long long)arg2 ;
-(void)textEntryDidCancel:(id)arg1 ;
-(NSURL *)verifyURL;
-(id)_copyCVVCodeFromUser;
-(BOOL)_verifyCVVCode:(id)arg1 error:(id*)arg2 ;
-(void)presentAlertWithTitle:(id)arg1 message:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_copyResponseWithCode:(id)arg1 error:(id*)arg2 ;
@end

