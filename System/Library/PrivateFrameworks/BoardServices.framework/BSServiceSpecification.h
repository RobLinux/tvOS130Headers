/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BoardServices/BoardServices-Structs.h>
#import <BoardServices/NSCopying.h>
#import <BoardServices/BSDescriptionProviding.h>

@class NSString;

@interface BSServiceSpecification : NSObject <NSCopying, BSDescriptionProviding> {

	NSString* _identifier;
	BOOL _launchWhitelisted;
	BOOL _derived;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (getter=isLaunchWhitelisted,nonatomic,readonly) BOOL launchWhitelisted;              //@synthesize launchWhitelisted=_launchWhitelisted - In the implementation block
@property (getter=isDerived,nonatomic,readonly) BOOL derived;                                  //@synthesize derived=_derived - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(BOOL)isDerived;
-(id)_initWithIdentifier:(id)arg1 launchWhitelisted:(BOOL)arg2 derived:(BOOL)arg3 ;
-(BOOL)isLaunchWhitelisted;
@end

