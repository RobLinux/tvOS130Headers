/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BRProgressProxy.h>
#import <CloudDocs/BRProgressProxyDelegate.h>

@class NSString;

@interface BRGlobalProgressProxy : BRProgressProxy <BRProgressProxyDelegate> {

	NSString* _kind;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)progressProxy:(id)arg1 shouldProxyProgress:(id)arg2 ;
-(id)progressProxy:(id)arg1 localizedDescriptionForProgress:(id)arg2 ;
-(id)initWithGlobalProgressKind:(id)arg1 ;
@end

