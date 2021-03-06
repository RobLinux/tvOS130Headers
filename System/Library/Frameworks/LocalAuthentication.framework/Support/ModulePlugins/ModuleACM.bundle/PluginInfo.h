/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModulePlugins/ModuleACM.bundle/ModuleACM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PluginInfo : NSObject {

	int _pid;
	/*^block*/id _invalidationBlock;

}

@property (nonatomic,readonly) int pid;                           //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) id invalidationBlock;              //@synthesize invalidationBlock=_invalidationBlock - In the implementation block
-(id)initWithProcessId:(int)arg1 invalidationBlock:(/*^block*/id)arg2 ;
-(int)pid;
-(id)invalidationBlock;
@end

