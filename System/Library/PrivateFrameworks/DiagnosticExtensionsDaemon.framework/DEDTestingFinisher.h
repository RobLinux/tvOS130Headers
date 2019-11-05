/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticExtensionsDaemon/DEDFinisher.h>
#import <DiagnosticExtensionsDaemon/NSSecureCoding.h>
#import <DiagnosticExtensionsDaemon/DEDSecureArchiving.h>

@class NSString;

@interface DEDTestingFinisher : NSObject <DEDFinisher, NSSecureCoding, DEDSecureArchiving>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)log;
+(id)archivedClasses;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 session:(id)arg2 ;
-(void)finishSession:(id)arg1 withConfiguration:(id)arg2 ;
-(id)flattenDirectories:(id)arg1 ;
@end

