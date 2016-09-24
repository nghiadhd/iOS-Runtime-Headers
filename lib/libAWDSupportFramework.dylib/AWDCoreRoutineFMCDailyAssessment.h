/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineFMCDailyAssessment : PBCodable <NSCopying> {
    int  _assistances;
    int  _assistedParkingEvents;
    int  _duration;
    int  _engagedParkingEvents;
    int  _engagements;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int assistances : 1; 
        unsigned int assistedParkingEvents : 1; 
        unsigned int duration : 1; 
        unsigned int engagedParkingEvents : 1; 
        unsigned int engagements : 1; 
        unsigned int parkingEvents : 1; 
    }  _has;
    int  _parkingEvents;
    unsigned long long  _timestamp;
}

@property (nonatomic) int assistances;
@property (nonatomic) int assistedParkingEvents;
@property (nonatomic) int duration;
@property (nonatomic) int engagedParkingEvents;
@property (nonatomic) int engagements;
@property (nonatomic) BOOL hasAssistances;
@property (nonatomic) BOOL hasAssistedParkingEvents;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasEngagedParkingEvents;
@property (nonatomic) BOOL hasEngagements;
@property (nonatomic) BOOL hasParkingEvents;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int parkingEvents;
@property (nonatomic) unsigned long long timestamp;

- (int)assistances;
- (int)assistedParkingEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)duration;
- (int)engagedParkingEvents;
- (int)engagements;
- (BOOL)hasAssistances;
- (BOOL)hasAssistedParkingEvents;
- (BOOL)hasDuration;
- (BOOL)hasEngagedParkingEvents;
- (BOOL)hasEngagements;
- (BOOL)hasParkingEvents;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)parkingEvents;
- (BOOL)readFrom:(id)arg1;
- (void)setAssistances:(int)arg1;
- (void)setAssistedParkingEvents:(int)arg1;
- (void)setDuration:(int)arg1;
- (void)setEngagedParkingEvents:(int)arg1;
- (void)setEngagements:(int)arg1;
- (void)setHasAssistances:(BOOL)arg1;
- (void)setHasAssistedParkingEvents:(BOOL)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasEngagedParkingEvents:(BOOL)arg1;
- (void)setHasEngagements:(BOOL)arg1;
- (void)setHasParkingEvents:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setParkingEvents:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end