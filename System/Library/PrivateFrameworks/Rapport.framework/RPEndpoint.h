/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Rapport/NSSecureCoding.h>

@class SFDevice, CUBonjourDevice, NSString, NSArray, IDSDevice;

@interface RPEndpoint : NSObject <NSSecureCoding> {

	SFDevice* _bleDevice;
	CUBonjourDevice* _bonjourDevice;
	unsigned _hotspotInfo;
	NSString* _identifier;
	NSString* _idsDeviceIdentifier;
	int _linkType;
	NSString* _mediaRemoteIdentifier;
	NSString* _mediaRouteIdentifier;
	NSString* _model;
	NSString* _name;
	NSArray* _serviceTypes;
	unsigned long long _statusFlags;
	NSString* _sourceVersion;
	BOOL _present;
	int _proximity;
	NSString* _homeKitUserIdentifier;
	NSString* _serviceType;
	IDSDevice* _idsDevice;

}

@property (nonatomic,retain) SFDevice * bleDevice;                                 //@synthesize bleDevice=_bleDevice - In the implementation block
@property (nonatomic,retain) CUBonjourDevice * bonjourDevice;                      //@synthesize bonjourDevice=_bonjourDevice - In the implementation block
@property (nonatomic,retain) IDSDevice * idsDevice;                                //@synthesize idsDevice=_idsDevice - In the implementation block
@property (nonatomic,copy) NSString * idsDeviceIdentifier;                         //@synthesize idsDeviceIdentifier=_idsDeviceIdentifier - In the implementation block
@property (assign,nonatomic) int linkType;                                         //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,copy) NSString * mediaRemoteIdentifier;                       //@synthesize mediaRemoteIdentifier=_mediaRemoteIdentifier - In the implementation block
@property (nonatomic,copy) NSString * mediaRouteIdentifier;                        //@synthesize mediaRouteIdentifier=_mediaRouteIdentifier - In the implementation block
@property (nonatomic,copy) NSString * model;                                       //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL present;                                         //@synthesize present=_present - In the implementation block
@property (nonatomic,copy) NSArray * serviceTypes;                                 //@synthesize serviceTypes=_serviceTypes - In the implementation block
@property (assign,nonatomic) unsigned long long statusFlags;                       //@synthesize statusFlags=_statusFlags - In the implementation block
@property (nonatomic,copy) NSString * sourceVersion;                               //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeKitUserIdentifier;              //@synthesize homeKitUserIdentifier=_homeKitUserIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned hotspotInfo;                               //@synthesize hotspotInfo=_hotspotInfo - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int proximity;                                      //@synthesize proximity=_proximity - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceType;                        //@synthesize serviceType=_serviceType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)nullEndpoint;
-(NSString *)name;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)present;
-(int)linkType;
-(void)setLinkType:(int)arg1 ;
-(NSString *)model;
-(NSString *)serviceType;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)sourceVersion;
-(void)setSourceVersion:(NSString *)arg1 ;
-(int)proximity;
-(void)setIdsDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)idsDeviceIdentifier;
-(unsigned long long)statusFlags;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)setStatusFlags:(unsigned long long)arg1 ;
-(void)setPresent:(BOOL)arg1 ;
-(unsigned)updateWithBonjourDevice:(id)arg1 ;
-(CUBonjourDevice *)bonjourDevice;
-(void)setBonjourDevice:(CUBonjourDevice *)arg1 ;
-(SFDevice *)bleDevice;
-(void)setBleDevice:(SFDevice *)arg1 ;
-(unsigned)hotspotInfo;
-(NSArray *)serviceTypes;
-(void)setServiceTypes:(NSArray *)arg1 ;
-(unsigned)updateWithSFDevice:(id)arg1 ;
-(NSString *)mediaRemoteIdentifier;
-(NSString *)mediaRouteIdentifier;
-(void)setMediaRemoteIdentifier:(NSString *)arg1 ;
-(void)setMediaRouteIdentifier:(NSString *)arg1 ;
-(BOOL)removeBonjourDevice:(id)arg1 ;
-(unsigned)updateWithIDSDevice:(id)arg1 ;
-(unsigned)removeIDSDevice;
-(BOOL)removeSFDevice:(id)arg1 ;
-(NSString *)homeKitUserIdentifier;
-(IDSDevice *)idsDevice;
-(void)setIdsDevice:(IDSDevice *)arg1 ;
@end

