/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPSecureKeyLoader.h>

@class TVLJavaScriptContext;

@interface TVLSecureKeyJavascriptLoader : TVPSecureKeyLoader {

	TVLJavaScriptContext* _javaScriptContext;

}

@property (nonatomic,retain) TVLJavaScriptContext * javaScriptContext;              //@synthesize javaScriptContext=_javaScriptContext - In the implementation block
-(TVLJavaScriptContext *)javaScriptContext;
-(void)startLoadingCertificateDataForRequest:(id)arg1 ;
-(void)startLoadingContentIdentifierDataForRequest:(id)arg1 ;
-(void)startLoadingKeyResponseDataForRequest:(id)arg1 ;
-(long long)_errorCodeForFailureOfFunctionWithName:(id)arg1 ;
-(unsigned long long)_numberOfArgumentsForSuccessCallbackForFunctionWithName:(id)arg1 ;
-(void)_callFunctionWithName:(id)arg1 withData:(id)arg2 request:(id)arg3 successHandler:(/*^block*/id)arg4 ;
-(id)initWithJavaScriptContext:(id)arg1 ;
-(void)setJavaScriptContext:(TVLJavaScriptContext *)arg1 ;
@end

