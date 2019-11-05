/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:08 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-4008.appex/Diagnostic-4008
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OSDBluetoothDevice : NSObject {

	unsigned _deviceType;
	unsigned _deviceClass;
	NSString* _defaultName;
	NSString* _name;
	NSString* _address;

}

@property (nonatomic,retain) NSString * defaultName;              //@synthesize defaultName=_defaultName - In the implementation block
@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * address;                  //@synthesize address=_address - In the implementation block
@property (assign,nonatomic) unsigned deviceType;                 //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) unsigned deviceClass;                //@synthesize deviceClass=_deviceClass - In the implementation block
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)address;
-(unsigned)deviceClass;
-(void)setAddress:(NSString *)arg1 ;
-(unsigned)deviceType;
-(void)setDeviceType:(unsigned)arg1 ;
-(void)setDeviceClass:(unsigned)arg1 ;
-(NSString *)defaultName;
-(void)setDefaultName:(NSString *)arg1 ;
@end
