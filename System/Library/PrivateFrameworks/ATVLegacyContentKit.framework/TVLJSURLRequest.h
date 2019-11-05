/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <ATVLegacyContentKit/TVLJSObject.h>

@class NSMutableURLRequest;

@interface TVLJSURLRequest : NSObject <TVLJSObject> {

	OpaqueJSValueRef _jsObjectRef;
	NSMutableURLRequest* _urlRequest;

}

@property (assign,nonatomic) OpaqueJSValueRef jsObjectRef;                  //@synthesize jsObjectRef=_jsObjectRef - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * urlRequest;              //@synthesize urlRequest=_urlRequest - In the implementation block
-(void)dealloc;
-(NSMutableURLRequest *)urlRequest;
-(void)setUrlRequest:(NSMutableURLRequest *)arg1 ;
-(OpaqueJSValueRef)jsObjectRef;
-(void)_jsFinalize;
-(void)setJsObjectRef:(OpaqueJSValueRef)arg1 ;
-(id)initWithContext:(OpaqueJSContextRef)arg1 urlRequest:(id)arg2 ;
@end

