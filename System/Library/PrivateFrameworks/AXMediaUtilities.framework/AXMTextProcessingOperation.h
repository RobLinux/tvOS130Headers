/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXMLanguage, AXMDiagnostics, NSLocale;

@interface AXMTextProcessingOperation : NSObject {

	AXMLanguage* _language;
	AXMDiagnostics* _diagnostics;

}

@property (nonatomic,readonly) NSLocale * lexiconLocale; 
@property (nonatomic,retain) AXMDiagnostics * diagnostics;              //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,readonly) AXMLanguage * language;                  //@synthesize language=_language - In the implementation block
+(id)operationWithLanguage:(id)arg1 diagnostics:(id)arg2 ;
+(id)operationWithSystemLanguage:(id)arg1 ;
-(AXMLanguage *)language;
-(AXMDiagnostics *)diagnostics;
-(void)setDiagnostics:(AXMDiagnostics *)arg1 ;
-(id)_initWithLanguage:(id)arg1 diagnostics:(id)arg2 ;
-(NSLocale *)lexiconLocale;
@end

