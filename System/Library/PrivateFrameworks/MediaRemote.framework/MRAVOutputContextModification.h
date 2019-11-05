/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface MRAVOutputContextModification : NSObject {

	unsigned long long _modificationType;
	NSArray* _concreteOutputDevices;
	NSArray* _outputDevices;
	NSArray* _avOutputDevices;
	NSString* _password;
	NSString* _initiator;

}

@property (nonatomic,readonly) unsigned long long modificationType;              //@synthesize modificationType=_modificationType - In the implementation block
@property (nonatomic,readonly) NSArray * concreteOutputDevices;                  //@synthesize concreteOutputDevices=_concreteOutputDevices - In the implementation block
@property (nonatomic,readonly) NSArray * outputDevices;                          //@synthesize outputDevices=_outputDevices - In the implementation block
@property (nonatomic,readonly) NSArray * avOutputDevices;                        //@synthesize avOutputDevices=_avOutputDevices - In the implementation block
@property (nonatomic,copy) NSString * password;                                  //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * initiator;                                 //@synthesize initiator=_initiator - In the implementation block
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(unsigned long long)modificationType;
-(NSArray *)outputDevices;
-(NSString *)initiator;
-(id)initWithType:(unsigned long long)arg1 devices:(id)arg2 ;
-(void)setInitiator:(NSString *)arg1 ;
-(void)modifyWithOutputContext:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_modifyWithOutputContext:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)errorFromResult:(id)arg1 ;
-(NSArray *)concreteOutputDevices;
-(NSArray *)avOutputDevices;
@end

