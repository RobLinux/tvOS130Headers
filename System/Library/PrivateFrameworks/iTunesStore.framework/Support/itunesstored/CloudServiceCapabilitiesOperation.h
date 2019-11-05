/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@interface CloudServiceCapabilitiesOperation : ISOperation {

	BOOL _allowsPromptingForPrivacyAcknowledgement;
	BOOL _allowsBypassOfPrivacyAcknowledgement;
	/*^block*/id _responseBlock;

}

@property (assign,nonatomic) BOOL allowsPromptingForPrivacyAcknowledgement; 
@property (assign,nonatomic) BOOL allowsBypassOfPrivacyAcknowledgement; 
@property (copy) id responseBlock; 
-(void)run;
-(id)responseBlock;
-(void)setResponseBlock:(id)arg1 ;
-(BOOL)allowsPromptingForPrivacyAcknowledgement;
-(void)setAllowsPromptingForPrivacyAcknowledgement:(BOOL)arg1 ;
-(void)setAllowsBypassOfPrivacyAcknowledgement:(BOOL)arg1 ;
-(BOOL)allowsBypassOfPrivacyAcknowledgement;
-(id)_newResponseWithSubscriptionStatus:(id)arg1 ;
@end
