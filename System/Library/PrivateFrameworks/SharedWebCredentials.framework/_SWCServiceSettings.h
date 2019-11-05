/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SharedWebCredentials/NSXPCListenerDelegate.h>
#import <SharedWebCredentials/SWCRedactedDescription.h>
#import <SharedWebCredentials/NSSecureCoding.h>

@class NSMutableDictionary, _SWCServiceSpecifier, _SWCGeneration, NSString, NSDictionary;

@interface _SWCServiceSettings : NSObject <NSXPCListenerDelegate, SWCRedactedDescription, NSSecureCoding> {

	NSMutableDictionary* _dict;
	unsigned _hasChanges : 1;
	_SWCServiceSpecifier* _serviceSpecifier;
	_SWCGeneration* _generation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) _SWCGeneration * generation;                          //@synthesize generation=_generation - In the implementation block
@property (readonly) _SWCServiceSpecifier * serviceSpecifier;              //@synthesize serviceSpecifier=_serviceSpecifier - In the implementation block
@property (readonly) BOOL hasChanges; 
+(BOOL)supportsSecureCoding;
+(id)_log;
+(id)notificationCenter;
+(id)serviceSettingsWithServiceSpecifier:(id)arg1 error:(id*)arg2 ;
+(void)serviceSettingsDidChange:(id)arg1 ;
+(void)postChangeNotificationForServiceSpecifier:(id)arg1 ;
+(BOOL)removeObjectsForKeys:(id)arg1 serviceType:(id)arg2 error:(id*)arg3 ;
+(BOOL)removeObjectsForKeys:(id)arg1 serviceSpecifier:(id)arg2 error:(id*)arg3 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)hasChanges;
-(_SWCGeneration *)generation;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
-(BOOL)commitReturningError:(id*)arg1 ;
-(id)_initWithServiceSpecifier:(id)arg1 dictionary:(id)arg2 generation:(id)arg3 ;
-(_SWCServiceSpecifier *)serviceSpecifier;
@end

