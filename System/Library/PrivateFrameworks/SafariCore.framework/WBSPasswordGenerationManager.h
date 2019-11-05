/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface WBSPasswordGenerationManager : NSObject {

	NSDictionary* _passwordRequirementsByDomain;

}

@property (nonatomic,copy) NSDictionary * passwordRequirementsByDomain;              //@synthesize passwordRequirementsByDomain=_passwordRequirementsByDomain - In the implementation block
+(id)requirementsForPasswordRuleSet:(id)arg1 respectingMinLength:(id)arg2 maxLength:(id)arg3 ;
+(BOOL)passwordLooksLikePasswordManagerGeneratedPassword:(id)arg1 ;
-(id)init;
-(id)defaultRequirementsForDomain:(id)arg1 ;
-(BOOL)manualPasswordGenerationIsDisallowedByRequirements:(id)arg1 ;
-(id)initWithPasswordRequirementsByDomain:(id)arg1 ;
-(id)updatedRequirements:(id)arg1 respectingMaxLength:(unsigned long long)arg2 ;
-(id)generatedPasswordMatchingRequirements:(id)arg1 ;
-(id)defaultRequirementsForURL:(id)arg1 ;
-(id)protectionSpaceForGeneratedPasswordsInProtectionSpace:(id)arg1 ;
-(BOOL)passwordGenerationIsDisallowedByRequirements:(id)arg1 ;
-(NSDictionary *)passwordRequirementsByDomain;
-(void)setPasswordRequirementsByDomain:(NSDictionary *)arg1 ;
@end

