/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:58 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/terminusd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NENexusDelegate <NSObject>
@optional
-(void)startBrowse:(id)arg1 fromNexus:(id)arg2;
-(void)stopBrowse:(id)arg1 fromNexus:(id)arg2;

@required
-(void)acceptNewFlow:(id)arg1 fromNexus:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)handleRequestToActivateNexus:(id)arg1 fromFlow:(id)arg2;

@end

