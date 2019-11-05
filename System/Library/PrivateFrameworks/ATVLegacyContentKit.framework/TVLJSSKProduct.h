/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <ATVLegacyContentKit/TVLJSObject.h>

@class SKProduct;

@interface TVLJSSKProduct : NSObject <TVLJSObject> {

	OpaqueJSValueRef _jsObjectRef;
	SKProduct* _product;

}

@property (nonatomic,readonly) SKProduct * product;              //@synthesize product=_product - In the implementation block
+(void)addClassDefinitionInContext:(OpaqueJSContextRef)arg1 ;
+(id)productFromJSValue:(OpaqueJSValueRef)arg1 context:(OpaqueJSContextRef)arg2 ;
-(id)init;
-(void)dealloc;
-(SKProduct *)product;
-(OpaqueJSValueRef)jsObjectRef;
-(void)_jsFinalize;
-(id)initWithProduct:(id)arg1 context:(OpaqueJSContextRef)arg2 ;
@end

