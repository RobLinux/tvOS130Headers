/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UACornerActionManagerHandler.h>
#import <useractivityd/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString;

@interface UABestAppSuggestionController : UACornerActionManagerHandler <NSXPCListenerDelegate> {

	BOOL _disableEntitlementsCheck;
	NSXPCListener* _bestAppsListener;

}

@property (retain) NSXPCListener * bestAppsListener;                //@synthesize bestAppsListener=_bestAppsListener - In the implementation block
@property (assign) BOOL disableEntitlementsCheck;                   //@synthesize disableEntitlementsCheck=_disableEntitlementsCheck - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)resume;
-(BOOL)suspend;
-(BOOL)terminate;
-(id)initWithManager:(id)arg1 name:(id)arg2 ;
-(void)setBestAppsListener:(NSXPCListener *)arg1 ;
-(NSXPCListener *)bestAppsListener;
-(BOOL)disableEntitlementsCheck;
-(void)setDisableEntitlementsCheck:(BOOL)arg1 ;
@end
