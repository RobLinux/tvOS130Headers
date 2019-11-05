/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/SDBonjourBrowserDelegate.h>

@class SDBonjourBrowser, NSArray, NSSet, NSString;

@interface SDWorkgroupBrowser : NSObject <SDBonjourBrowserDelegate> {

	int _clientCount;
	SDBonjourBrowser* _browser;

}

@property (copy,readonly) NSArray * nodes; 
@property (copy,readonly) NSSet * workgroups; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedBrowser;
-(id)init;
-(void)start;
-(void)stop;
-(NSArray *)nodes;
-(void)bonjourNodesDidChange:(id)arg1 ;
-(NSSet *)workgroups;
@end

