/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HangTracer.framework/PlugIns/PerformanceLoggingDiagnosticExtension.appex/PerformanceLoggingDiagnosticExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PerformanceLoggingDiagnosticExtension/PerformanceLoggingDiagnosticExtension-Structs.h>
#import <DiagnosticExtensions/DEExtensionProvider.h>

@interface PerformanceLoggingDiagnosticExtensionExtension : DEExtensionProvider
-(id)attachmentsForParameters:(id)arg1 ;
-(id)attachmentList;
-(id)linkRMEAndGetEPLProfilePath;
-(void)enableReportMemoryException:(BOOL)arg1 ;
-(id)keyWithPrefix:(id)arg1 ;
-(BOOL)setEPLKeysForParameters:(id)arg1 error:(id*)arg2 domain:(CFStringRef)arg3 ;
-(BOOL)setEPLKeysForParameters:(id)arg1 error:(id*)arg2 ;
-(id)sysdiagnoseParamsFromDEParams:(id)arg1 ;
-(id)takeSysdiagnose:(id)arg1 error:(id*)arg2 ;
@end

