/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/PlugIns/com.apple.DiagnosticExtensions.sysdiagnose.appex/com.apple.DiagnosticExtensions.sysdiagnose
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticExtensions/DEExtensionProvider.h>

@protocol OS_xpc_object;
@class NSObject;

@interface sysdiagnose_DEExtension : DEExtensionProvider {

	NSObject*<OS_xpc_object> _connection;

}

@property (retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
-(void)dealloc;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(id)attachmentsForParameters:(id)arg1 ;
-(id)attachmentList;
-(id)getRemoteArchives;
@end
