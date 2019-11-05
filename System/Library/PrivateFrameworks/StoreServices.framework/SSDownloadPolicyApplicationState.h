/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:11:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/NSSecureCoding.h>
#import <StoreServices/SSXPCCoding.h>
#import <StoreServices/NSCopying.h>

@class NSString, NSSet;

@interface SSDownloadPolicyApplicationState : NSObject <NSSecureCoding, SSXPCCoding, NSCopying> {

	NSString* _applicationIdentifier;
	NSSet* _applicationStates;

}

@property (nonatomic,copy) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * applicationStates;                     //@synthesize applicationStates=_applicationStates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)applicationIdentifier;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSSet *)applicationStates;
-(id)initWithApplicationIdentifier:(id)arg1 ;
-(void)addApplicationState:(long long)arg1 ;
-(void)setNotRunningApplicationStates;
-(void)setApplicationStates:(NSSet *)arg1 ;
@end

