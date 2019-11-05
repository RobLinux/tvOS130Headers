/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <DiagnosticsKit/DKExtensionRegistry.h>

@class NSMutableDictionary, NSSet, NSString;

@interface DKReporterRegistry : NSObject <DKExtensionRegistry> {

	NSMutableDictionary* _generatorLookup;
	NSMutableDictionary* _componentDedup;

}

@property (nonatomic,retain) NSMutableDictionary * generatorLookup;              //@synthesize generatorLookup=_generatorLookup - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * componentDedup;               //@synthesize componentDedup=_componentDedup - In the implementation block
@property (nonatomic,readonly) NSSet * components; 
@property (nonatomic,readonly) NSSet * generators; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Class extensionClass; 
@property (nonatomic,readonly) Class responseObjectClass; 
-(id)init;
-(NSSet *)components;
-(NSMutableDictionary *)generatorLookup;
-(NSMutableDictionary *)componentDedup;
-(NSSet *)generators;
-(void)addExtensionAdapter:(id)arg1 ;
-(void)enumerateExtensionAdaptersWithBlock:(/*^block*/id)arg1 ;
-(Class)extensionClass;
-(Class)responseObjectClass;
-(id)generatorForComponentIdentity:(id)arg1 ;
-(void)setGeneratorLookup:(NSMutableDictionary *)arg1 ;
-(void)setComponentDedup:(NSMutableDictionary *)arg1 ;
@end

